#!/bin/bash 

echo Hello, insert a value for N:  
read varname



cd Prog1O0 && mkdir build && cd build && cmake ../ && make && ./code $varname
cd .. && rm -rf build && cd ..

cd Prog1O3 && mkdir build && cd build && cmake ../ && make && ./code $varname
cd .. && rm -rf build && cd ..

cd Prog2O0 && mkdir build && cd build && cmake ../ && make && ./code $varname
cd .. && rm -rf build && cd ..

cd Prog2O3 && mkdir build && cd build && cmake ../ && make && ./code $varname
cd .. && rm -rf build && cd ..

cd Prog3O0 && mkdir build && cd build && cmake ../ && make && ./code $varname
cd .. && rm -rf build && cd ..

cd Prog3O3 && mkdir build && cd build && cmake ../ && make && ./code $varname
cd .. && rm -rf build && cd ..
