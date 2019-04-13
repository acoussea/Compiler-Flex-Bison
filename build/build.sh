#!/bin/bash

cmake ../src/
make 
./facile ../src/essai1.facile
ilasm essai1.il
chmod 755 essai1.exe
./essai1.exe

