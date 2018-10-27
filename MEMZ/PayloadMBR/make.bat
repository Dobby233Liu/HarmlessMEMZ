@echo off
cd data&&make&&cd ..&&nasm -o disk.img kernel.asm
pause