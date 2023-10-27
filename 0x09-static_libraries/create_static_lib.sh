#!/bin/bash
find  . -name "*.c" -exec gcc -c {} +
ar crs liball.a *.o
