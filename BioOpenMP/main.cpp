//
//  main.cpp
//  BioOpenMP
//
//  Created by Carlos Brenneisen on 11/4/20.
//

#include <iostream>
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include "Problems.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    Problems problems;
    
    int number_of_threads;
    if (argc == 2) {
        number_of_threads = atoi(argv[1]);
        if (number_of_threads <= 0) {
            printf("Invalid number of threads specified. Must be 1 or greater.");
        }
    } else {
        number_of_threads = omp_get_num_procs();
    }
    
    char option = *(argv[1]);

    int problem;
    printf("Enter a problem number\n");
    scanf("%d", &problem);

    switch (problem) {
        case 1:
            problems.problem1(number_of_threads);
            break;
        case 2:
            problems.problem2(number_of_threads);
            break;
        case 3:
            problems.problem3(number_of_threads);
            break;
        default:
            printf("Invalid option selected. Problems go from 1-3 \n");
    }
    return 0;
}
