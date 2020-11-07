//
//  DNAProcessor.cpp
//  BioOpenMP
//
//  Created by Carlos Brenneisen on 11/4/20.
//

#include "DNAProcessor.hpp"
#include <iostream>
#include <stdlib.h>
#include <unordered_map>
#include <omp.h>

using namespace std;

unordered_map<char, int> DNAProcessor::count_bases(string dna)
{
    unordered_map<char, int> map;
    map['A'] = 0;
    map['T'] = 0;
    map['G'] = 0;
    map['C'] = 0;

    for (int i = 0; i < dna.size(); i++) {
        map[dna[i]] ++;
    }

    return map;
}

string DNAProcessor::transcribe(string dna)
{
    unordered_map<int, string> map;
    int num_threads = omp_get_num_procs();
    long dna_length = dna.size();
    string rna = "";

    for (int i=0; i< num_threads; ++i) {
        map[i] = "";
    }

    #pragma omp parallel for ordered schedule(static)
    for (long i = 0; i < dna_length; i++) {
        char base = dna[i];
        map[omp_get_thread_num()] += base == 'T' ? 'U' : base;
    }

    for (int i = 0; i < num_threads; i++) {
        rna += map[i];
    }

    return rna;
}
