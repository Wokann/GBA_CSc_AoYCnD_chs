 cd /d %~dp0
@echo off  
echo Building text preprocessor...  
gcc -std=c99 -Wall -O2 -o text_preproc.exe text_preproc.c  
gcc -std=c99 -Wall -O2 -o text_preproc_shinchan.exe text_preproc_shinchan.c  
if errorlevel 1 (  
    echo Build failed  
    rem pause  
    exit /b 1  
)  
echo Build successful: text_preproc.exe created  
rem pause