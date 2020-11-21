//
//  GenerationProcessor.cpp
//  BioOpenMP
//
//  Created by Carlos Brenneisen on 11/16/20.
//

#include "GenerationProcessor.hpp"

#include <omp.h>


int GenerationProcessor::recurrence_relations(int months, int pairs) {

    int a = 0;
    int b = 1;

    for (int i = 1; i < months; i++) {
        int temp = b;
        b = b + (a * pairs);
        a = temp;
    }
    
    return b;
}
