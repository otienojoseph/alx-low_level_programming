#!/bin/bash

result=$(find . -type f -name "*c" ! -name "[0-9]*.c")
gcc -shared -o libdynamic.so $result
