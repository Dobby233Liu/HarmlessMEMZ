@echo off
cd Image
python png2bin.py frames/00.png frames/01.png frames/02.png frames/03.png frames/04.png frames/05.png frames/06.png frames/07.png frames/08.png frames/09.png frames/10.png frames/11.png image.bin
cd ../Song
python midi2bin.py nyan.mid song.bin

cd ..

cat Image/image.bin Song/song.bin Other/message.txt > data.bin
gcc -o Compressor\compress Compressor\compress.c && Compressor\compress data.bin compressed.bin