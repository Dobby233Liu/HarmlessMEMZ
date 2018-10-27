@echo off
cd Image
python png2bin.py Dead.png image.bin

cd ..

Compressor\compress Image\image.bin data.bin