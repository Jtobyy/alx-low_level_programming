#!/bin/bash
gcc -fPIC *.c -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
