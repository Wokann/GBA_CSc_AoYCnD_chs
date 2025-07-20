 cd /d %~dp0

call makeo.bat src
call makeo.bat strings

.\tools\armips\armips.exe main.s -sym CSc_AoYCnD_chs.sym

@echo off
ping 127.0.0.1 -n 3 >nul
