#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -wall -wextra -werror -pedantic -c -fPIC *.c
# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o
# Clean up by removing the object files
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
