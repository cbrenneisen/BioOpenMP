//
//  Problems.cpp
//  BioOpenMP
//
//  Created by Carlos Brenneisen on 11/4/20.
//

#include "Problems.hpp"
#include "DNAProcessor.hpp"
#include <iostream>

using namespace std;

void Problems::problem1(int argc, const char **argv) {

    if (argc < 2) {
        cout << "Not enough arguments provided - add dna string";
        return;
    }
    
    string dna = argv[2];
    DNAProcessor processor;
    unordered_map<char, int> bases = processor.count_bases(dna);

    cout << "Here's the dna results\n";
    printf("%d %d %d %d \n", bases['A'], bases['C'], bases['G'], bases['T']);
}

void Problems::problem2(int argc, const char **argv) {

    if (argc < 2) {
        cout << "Not enough arguments provided - add dna string";
        return;
    }

    string dna = argv[2];
    DNAProcessor processor;
    string rna = processor.transcribe(dna);

    printf("Input:  %s\n", dna.c_str());
    cout << "Here's the dna -> rna results\n";
    printf("Output: %s\n", rna.c_str());
}
