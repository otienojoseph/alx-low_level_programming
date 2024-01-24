#!/bin/bash

# find all .c files that don't begin with a digit
# result=$(find . -type f -name "*c" ! -name "[0-9]*.c")
# compile to object files
gcc -c -fPIC -c *.c
# create shared library
gcc -shared -o liball.so *.o


# clean up object files
rm *.o
