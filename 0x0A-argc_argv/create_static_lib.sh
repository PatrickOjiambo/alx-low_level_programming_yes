#!/bin/bash

# Compile all the .c files into .o files
gcc -c *.c

# Create the static library from the .o files
ar rc liball.a *.o

# Index the library for faster linking
ranlib liball.a

# Clean up the .o files
rm *.o

