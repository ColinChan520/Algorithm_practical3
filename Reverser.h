#ifndef REVERSER_H
#define REVERSER_H
#include <iostream>
#include <string>

class Reverser{
    public:
    int reverseDigit(int value);
    std::string reverseString(std::string characters);
    int numResult = 0;
};

#endif