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

    //~~~~~~~~~~
    //~~~~~~~~~~~~ DOING THE SUMS ~~~~~~~~~~~
    //~~~~~~~~~~


    // Part 1: Basic sumation
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();
    unsigned long long int sum = 0;
    for ( int i = 0; i < target; i++)
    {
        // printf("%ld bytes per pointer\n", sizeof(sum));
        sum += i;
    }
    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end_time - start_time;
    std::cout << "Part 1 elapsed time is : " << elapsed.count() << " " << std::endl;
    std::cout << "Sum: " << sum << std::endl;
   
    return 1;
}