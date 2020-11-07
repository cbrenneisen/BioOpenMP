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
    char option = *(argv[1]);

    switch (option) {
        case '1':
            problems.problem1(argc, argv);
            break;
        case '2':
            problems.problem2(argc, argv);
            break;
        default:
            printf("Invalid option selected: %c", option);
    }
    return 0;
}
