//
//  DNAProcessor.cpp
//  BioOpenMP
//
//  Created by Carlos Brenneisen on 11/4/20.
//

#include "DNAProcessor.hpp"
#include <iostream>

using namespace std;

std::unordered_map<char, int> DNAProcessor::count_bases(string dna)
{
    //std::cout << "Hello World from DNA!!!\n";
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
