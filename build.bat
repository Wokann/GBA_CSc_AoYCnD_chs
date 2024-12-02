 cd /d %~dp0
 C:\devkitPro\devkitARM\bin\arm-none-eabi-gcc.exe -mabi=aapcs -std=c99 -w -nostartfiles -nodefaultlibs -Os -march=armv5te -mtune=arm946e-s -mthumb -Wl,--use-blx -I C:\devkitPro\libgba\include -c src\RenderText.c -o build\RenderText.o
 C:\devkitPro\devkitARM\bin\arm-none-eabi-gcc.exe -mabi=aapcs -std=c99 -w -nostartfiles -nodefaultlibs -Os -march=armv5te -mtune=arm946e-s -mthumb -Wl,--use-blx -I C:\devkitPro\libgba\include -S src\RenderText.c -o build\RenderText.s
 C:\devkitPro\devkitARM\bin\arm-none-eabi-objcopy.exe -O binary build\RenderText.o build\RenderText.bin

.\tools\armips\armips.exe main.s -sym main.sym
@echo off
ping 127.0.0.1 -n 3 >nul

 rem tools/agbcc/bin/agbcc  -mthumb-interwork -Wimplicit -Wparentheses -Werror -O1 -g -fhex-asm src/RenderText.c -o build/RenderText.o
rem tools/agbcc/bin/agbcc -mthumb-interwork -Wimplicit -Wparentheses -Werror -O1 -g -fhex-asm src/RenderText.c -o build/RenderText.s
rem arm-none-eabi-objcopy -O binary build/RenderText.o build/RenderText.bin