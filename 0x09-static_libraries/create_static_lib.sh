#!/bin/bash
gcc -c *.c
ar rc liball.a *.o
ranlib liball..a
~
chmod u+x create_static_lib.sh
