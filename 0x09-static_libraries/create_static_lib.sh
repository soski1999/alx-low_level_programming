#!bin/bash
gcc -wall -wextra -werror -ppedantic -c *.c
ar rc liball.a *.o
