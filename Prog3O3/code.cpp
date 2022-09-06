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


    // Part 3 setup:
    // Make a vector filled with random numbers (0 % N-1)
    std::vector<int> myVector2;
    srand48(target);
    for ( int i = 0; i < target; i++)
        myVector2.__emplace_back( lrand48() % target );


    //~~~~~~~~~~
    //~~~~~~~~~~~~ DOING THE SUMS ~~~~~~~~~~~
    //~~~~~~~~~~

    // Part 3: Unstructured Memory
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();
    unsigned long long int sum2 = 0;
    int zero = 0; // Declaring 0 pointer
    int* pointer = &zero;
    for ( int i = 0; i < target; i++)
    {
        sum2 += myVector2[*pointer];
        pointer = &myVector2[*pointer];
    }
    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end_time - start_time;
    std::cout << "Part 3 elapsed time is : " << elapsed.count() << " " << std::endl;
    std::cout << "Sum: " << sum2 << std::endl;

    return 1;
}

