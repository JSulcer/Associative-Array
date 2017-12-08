// Author: Jon Sulcer
// Date: 12/2/17
// File: main.cpp
// Description:

#include "associative.h"
using namespace std;

int main(){
    cout << "Hello World" << endl;

    associative Test;

    Test.insert("Bob", 5);
    Test.insert("Ted", 2);
    Test.insert("Nik", 7);

    Test.print();

    cout << "Done" << endl;

    return 0;
}
