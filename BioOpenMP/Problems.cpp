//
//  Problems.cpp
//  BioOpenMP
//
//  Created by Carlos Brenneisen on 11/4/20.
//

#include "Problems.hpp"
#include "DNAProcessor.hpp"
#include "GenerationProcessor.hpp"
#include <iostream>

using namespace std;

void Problems::problem1(int number_of_threads) {

    string dna = get_string("Enter a dna string");

    DNAProcessor processor;
    unordered_map<char, int> bases = processor.count_bases(dna);

    cout << "Here's the base counts: \n";
    printf("%d %d %d %d \n", bases['A'], bases['C'], bases['G'], bases['T']);
}

void Problems::problem2(int number_of_threads) {

    string dna = get_string("Enter a dna string");

    DNAProcessor processor;
    string rna = processor.transcribe(dna);

    cout << "Here's the dna -> rna results\n";
    printf("%s\n", rna.c_str());
}

void Problems::problem3(int number_of_threads) {

    string dna = get_string("Enter a dna string");

    DNAProcessor processor;
    string rna = processor.reverse_complement(dna);

    cout << "Here's the reverse complement \n";
    printf("%s\n", rna.c_str());
}

void Problems::problem4(int number_of_threads) {

    int n = get_int("Enter the number of months");
    int k = get_int("Enter the number of pairs produced");

    GenerationProcessor processor;
    int result = processor.recurrence_relations(n, k);

    printf("Here's the result: %d\n", result);
}


string Problems::get_string(string prompt) {

    string input;
    printf("%s\n", prompt.c_str());
    cin.ignore();
    getline(cin, input);

    return input;
}

int Problems::get_int(string prompt) {

    int input;
    printf("%s\n", prompt.c_str());
    cin.ignore();
    scanf("%d", &input);

    return input;
}
