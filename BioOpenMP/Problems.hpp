//
//  Problems.hpp
//  BioOpenMP
//
//  Created by Carlos Brenneisen on 11/4/20.
//

#ifndef Problems_hpp
#define Problems_hpp

#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

#endif /* Problems_hpp */

using namespace std;

class Problems
{
    
public:

    // base count
    void problem1(int number_of_threads);
    
    // transcription
    void problem2(int number_of_threads);

    // reverse complement
    void problem3(int number_of_threads);

    // recurrence relations
    void problem4(int number_of_threads);
    
private:

    string get_string(string prompt);
    
    int get_int(string prompt);
};
