#!/bin/bash 


cd Prog1O0 && mkdir build && cd build && cmake ../ && make && ./code 10000000
cd .. && rm -rf build && cd ..

cd Prog1O3 && mkdir build && cd build && cmake ../ && make && ./code 10000000
cd .. && rm -rf build && cd ..

cd Prog2O0 && mkdir build && cd build && cmake ../ && make && ./code 10000000
cd .. && rm -rf build && cd ..

cd Prog2O3 && mkdir build && cd build && cmake ../ && make && ./code 10000000
cd .. && rm -rf build && cd ..

cd Prog3O0 && mkdir build && cd build && cmake ../ && make && ./code 10000000
cd .. && rm -rf build && cd ..

cd Prog3O3 && mkdir build && cd build && cmake ../ && make && ./code 10000000
cd .. && rm -rf build && cd ..
