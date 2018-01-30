#!/bin/sh
rm reverse_all
gcc -o reverse_all reverse_all.c
echo $(./reverse_all $*)
