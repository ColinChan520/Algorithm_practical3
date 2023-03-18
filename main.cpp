#include <iostream>
#include <string>
#include "Reverser.h"

using namespace std;

int main(){
    int a = 9900;
    Reverser re;
    int result = re.reverseDigit(a);
    cout << result << endl;
}
