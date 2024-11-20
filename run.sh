#/bin/bash

set -xe

gcc -c -g  ./src/ds/sequence_list_static.c -o ./src/ds/objs/sequence_list_static.o

gcc -c -g ./src/main.c -o ./src/ds/objs/main.o

gcc -g ./src/ds/objs/main.o                    \
       ./src/ds/objs/sequence_list_static.o    \
    -I./raylib-5.5_win64_mingw-w64/include/    \
    -L./raylib-5.5_win64_mingw-w64/lib/        \
    -lraylib -lopengl32 -lgdi32 -lwinmm        \
    -o main.exe                                \

./main.exe

