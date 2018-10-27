@echo off
rem clean
cd /d %~dp0&&cd data&&make.sh&&cd /d %~dp0&&nasm -o disk.img kernel.asm