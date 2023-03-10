#!/bin/bash

# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library
ar -rc liball.a *.o

# Clean up the .o files
rm -f *.o
