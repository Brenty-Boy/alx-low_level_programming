#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc lib.a *.o
ranlib lib.a
