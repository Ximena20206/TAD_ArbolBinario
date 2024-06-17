@echo off

rem presentacion
cscript //nologo maximize.vbs
chcp 65001 > nul
timeout /t 1 /nobreak > nul

rem compilar
gcc -o programa main.c Recorridos.c TAD_AB\TADArbolBin.c -o recorridos

rem ejecutar
recorridos.exe
pause