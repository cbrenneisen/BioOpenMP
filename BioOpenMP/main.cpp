//
//  main.cpp
//  BioOpenMP
//
//  Created by Carlos Brenneisen on 11/4/20.
//

#include <iostream>
#include "DNAProcessor.hpp"
#include <sstream>
#include <string>
#include <unordered_map>
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main(int argc, const char * argv[]) {

    DNAProcessor processor;
    processor.PrintHelloWorld();
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    unordered_map<char, char> map;
    map['A'] = 'T';
    map['T'] = 'A';
    map['G'] = 'C';
    map['C'] = 'G';

    string dna = argv[1];

    ostringstream os;

    #pragma omp parallel for
    for (int i = 0; i < dna.size(); i++) {
          int thread = omp_get_thread_num();
          printf("%d - %c\n", thread, dna[i]);
          //cout << dna[i] << endl;
    }

    
    return 0;
}
