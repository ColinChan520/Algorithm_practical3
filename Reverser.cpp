#include "Reverser.h"

using namespace std;

int Reverser:: reverseDigit(int value){
    if(value != 0){
        numResult = numResult*10 + value%10;
        reverseDigit(value/10);
    }
    else{
        return numResult;
    }
}

string Reverser:: reverseString(string characters){
    if(characters.length() > 1){
        string first(1, characters[0]);
        string subString = characters.substr(1); // cut off from index 1
        return reverseString(subString) + first;
    }
    else{
        return characters;
    }
}