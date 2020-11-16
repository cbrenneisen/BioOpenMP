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

void Problems::problem1(int number_of_threads) {

    string dna = get_string("Enter a dna string \n");

    DNAProcessor processor;
    unordered_map<char, int> bases = processor.count_bases(dna);

    cout << "Here's the base counts: \n";
    printf("%d %d %d %d \n", bases['A'], bases['C'], bases['G'], bases['T']);
}

void Problems::problem2(int number_of_threads) {

    string dna = get_string("Enter a dna string \n");

    DNAProcessor processor;
    string rna = processor.transcribe(dna);

    cout << "Here's the dna -> rna results\n";
    printf("%s\n", rna.c_str());
}

void Problems::problem3(int number_of_threads) {

    string dna = get_string("Enter a dna string \n");

    DNAProcessor processor;
    string rna = processor.reverse_complement(dna);

    cout << "Here's the reverse complement \n";
    printf("%s\n", rna.c_str());
}


string Problems::get_string(string prompt) {

    string input;
    printf("Enter a dna string \n");
    cin.ignore();
    getline(cin, input);

    return input;
}
