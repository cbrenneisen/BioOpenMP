//
//  DNAProcessor.hpp
//  BioOpenMP
//
//  Created by Carlos Brenneisen on 11/4/20.
//

#ifndef DNAProcessor_hpp
#define DNAProcessor_hpp

#include <stdio.h>
#include <stdlib.h>
#include <unordered_map>

#endif /* DNAProcessor_hpp */

using namespace std;

class DNAProcessor
{

public:

    unordered_map<char, int> count_bases(string dna);
    
    string transcribe(string dna);

    string reverse_complement(string dna);
    
private:

    char complement(char base);

    unordered_map<int, string> thread_map();
    
    unordered_map<char, int> base_map();

    unordered_map<int, unordered_map<char, int>> thread_map_bases();
};

