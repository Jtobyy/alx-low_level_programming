#!/bin/bash
gcc -fPIC *.c -shared -o liball.so
chmod a+x liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
