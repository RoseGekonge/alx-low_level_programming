#!/bin/bash
gcc -c *.c -o fpic | gcc *.o -shared -o liball.so
