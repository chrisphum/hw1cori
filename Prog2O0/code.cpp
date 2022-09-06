//
// (C) 2021, E. Wes Bethel
//
// Modified by Christopher Humphrey
// Course: High-Performance Computing
// Homework #1
// 

#include <iostream>
#include <chrono>
#include <unistd.h>
#include <vector>
#include <stdlib.h>
#include <iomanip>

int
main (int ac, char *av[])

{
    int target = std::atoi(av[1]);
    // std::cout << std::fixed;
    // std::cout << std::setprecision(10);

    // Part 2 setup:
    // Make a vector and fill it with 0...N-1
    std::vector<int> myVector;
    for ( int i = 0; i < target; i++)
        myVector.emplace_back(i);

    //~~~~~~~~~~
    //~~~~~~~~~~~~ DOING THE SUMS ~~~~~~~~~~~
    //~~~~~~~~~~


    
    // Part 2: Structured Memory
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();
    unsigned long long int sum1 = 0;
    for ( int i = 0; i < target; i++)
        sum1 += myVector[i];
    
    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end_time - start_time;
    std::cout << "Part 2 elapsed time is : " << elapsed.count() << " " << std::endl;
    std::cout << "Sum: " << sum1 << std::endl;


    return 1;
}
