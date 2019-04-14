#!/bin/bash

cmake ../src/
make 
./facile ../test/essai2.facile
ilasm essai2.il
chmod 755 essai2.exe
./essai2.exe

