 cd /d %~dp0
@echo off
setlocal ENABLEEXTENSIONS ENABLEDELAYEDEXPANSION

:: 如果有第一个参数，则用作源目录，否则默认src
if "%~1"=="" (
    set "SRC_DIR=src"
) else (
    set "SRC_DIR=%~1"
)

:: 设置路径
set "PREPROC_EXE=tools\wokann\text_preproc\text_preproc_shinchan.exe"
set "CHARMAP_FILE=charmap.txt"
set "BUILD_DIR=build"
set "GBA_INCLUDE=C:\devkitPro\libgba\include"
set "GCC_BIN=C:\devkitPro\devkitARM\bin"
set "INCLUDE_DIR=.\include"

:: agbcc相关工具路径  
set "AGBCC_EXE=tools\agbcc\bin\agbcc.exe"

:: 转为绝对路径
pushd "%~dp0"
for %%I in ("%SRC_DIR%") do set "SRC_ROOT=%%~fI"
for %%I in ("%BUILD_DIR%") do set "BUILD_ROOT=%%~fI"
popd

:: 遍历所有 .c 文件
for /R "%SRC_ROOT%" %%F in (*.c) do (
    set "ABS_SRC=%%~fF"

    :: 截断绝对路径，得到相对 src 内部的子路径
    set "REL_PATH=!ABS_SRC:%SRC_ROOT%\=!"

    :: 构造目标路径：build\src\相对路径
    set "BUILD_SRC=%BUILD_ROOT%\%SRC_DIR%\!REL_PATH!"
    set "BUILD_OBJ=!BUILD_SRC:.c=.o!"  
    set "BUILD_ASM_TEMP=!BUILD_SRC:.c=.s!"  
    set "BUILD_PREPROCESSED_TEMP=!BUILD_SRC:.c=.i!"  

    :: 创建输出目录
    for %%D in ("!BUILD_SRC!") do (
        if not exist "%%~dpD" (
            mkdir "%%~dpD"
        )
    )

    :: 手动设置初始结束符，以供小新专用版预处理器自动替换
    echo [*] Preprocessing: !ABS_SRC!
    %PREPROC_EXE% "!ABS_SRC!" "!BUILD_SRC!" %CHARMAP_FILE%

    if 1 == 1 ( ::"%SRC_DIR%"=="src" (
        echo [*] Compiling to .o with agbcc: !BUILD_SRC!  
        echo [*] CPP preproc
        :: 步骤1: C预处理 (使用agbcc的CPPFLAGS)  
        "%GCC_BIN%\arm-none-eabi-cpp.exe" -I include -I tools\agbcc\include -I tools\agbcc -nostdinc -undef "!BUILD_SRC!" > "!BUILD_PREPROCESSED_TEMP!"  
        if errorlevel 1 (  
            echo ERROR: CPP preprocessing failed for !BUILD_SRC!  
            del "!BUILD_PREPROCESSED_TEMP!" 2>nul  
            continue  
        )  

        echo [*] Agbcc
        :: 步骤2: agbcc编译 (使用agbcc的CFLAGS)  
        "%AGBCC_EXE%" -mthumb-interwork -Wimplicit -Wparentheses -Werror -O0 -fhex-asm -g -o "!BUILD_ASM_TEMP!" "!BUILD_PREPROCESSED_TEMP!"  
        if errorlevel 1 (  
            echo ERROR: agbcc compilation failed for !BUILD_SRC!  
            del "!BUILD_PREPROCESSED_TEMP!" 2>nul  
            del "!BUILD_ASM_TEMP!" 2>nul  
            continue  
        )  
    
        echo [*] add assem
        :: 步骤3: 添加汇编段标记  
        :: 修正：使用重定向追加的方式，避免复杂语法  
        echo .text > "!BUILD_ASM_TEMP!.final"  
        echo [*] 1
        echo 	.align	2, 0 >> "!BUILD_ASM_TEMP!.final"
        echo [*] 2
        type "!BUILD_ASM_TEMP!" >> "!BUILD_ASM_TEMP!.final"
        echo [*] 3
        if errorlevel 1 (  
            echo ERROR: Adding assembly sections failed for !BUILD_SRC!  
            del "!BUILD_PREPROCESSED_TEMP!" 2>nul  
            del "!BUILD_ASM_TEMP!" 2>nul  
            del "!BUILD_ASM_TEMP!.final" 2>nul  
            continue  
        )  
    
        echo [*] create .o
        :: 步骤4: 汇编生成.o文件  
        "%GCC_BIN%\arm-none-eabi-as.exe" -mcpu=arm7tdmi -o "!BUILD_OBJ!" "!BUILD_ASM_TEMP!.final"  
        if errorlevel 1 (  
            echo ERROR: Assembling to .o failed for !BUILD_SRC!  
            del "!BUILD_PREPROCESSED_TEMP!" 2>nul  
            del "!BUILD_ASM_TEMP!" 2>nul  
            del "!BUILD_ASM_TEMP!.final" 2>nul  
            continue  
        )  

        echo [*] Extracting binary: !BUILD_SRC!
        "%GCC_BIN%\arm-none-eabi-objcopy.exe" -O binary "!BUILD_OBJ!" "!BUILD_SRC:.c=.bin!"

    ) else (
        echo [*] Compiling to .o: !BUILD_SRC!
        "%GCC_BIN%\arm-none-eabi-gcc.exe" -mabi=aapcs -std=c99 -w -nostartfiles -nodefaultlibs -O0 -march=armv5te -mtune=arm946e-s -mthumb -I"%GBA_INCLUDE%" -I"%INCLUDE_DIR%" -c "!BUILD_SRC!" -o "!BUILD_OBJ!"

        echo [*] Generating .s file: !BUILD_SRC!
        "%GCC_BIN%\arm-none-eabi-gcc.exe" -mabi=aapcs -std=c99 -w -nostartfiles -nodefaultlibs -O0 -march=armv5te -mtune=arm946e-s -mthumb -I"%GBA_INCLUDE%" -I"%INCLUDE_DIR%" -S "!BUILD_SRC!" -o "!BUILD_ASM_TEMP!"

        echo [*] Extracting binary: !BUILD_SRC!
        "%GCC_BIN%\arm-none-eabi-objcopy.exe" -O binary "!BUILD_OBJ!" "!BUILD_SRC:.c=.bin!"
    )
)

echo All tasks completed.
