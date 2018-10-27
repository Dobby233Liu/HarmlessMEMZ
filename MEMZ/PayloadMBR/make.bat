@echo off
cd data&&make&&nasm -o disk.img kernel.asm
pause