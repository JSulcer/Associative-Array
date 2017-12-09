// Authors: Jon Sulcer and Adam Chisolm
// Date: 12/2/17
// File: main.cpp
// Description: main driver for the associative array program

#include "associative.h"
using namespace std;

int main(){
    cout << "Hello World" << endl;

    associative Test;
    string fileName;

    Test.insert("Bob", 5);
    Test.insert("Ted", 2);
    Test.insert("Nik", 7);
    Test.insert("Bill", 15);
    Test.insert("Zack", 12);
    Test.insert("Hal", 17);
    Test.insert("Adam", 11);
    Test.insert("Jon", 55);

    Test.print();

    Test.delete_index("Ted");

    Test.print();
    
    Test.min();
    Test.max();
    
    Test.find("Hal");
    
    cout << "Enter a file name: ";
    cin >> fileName;
    
    Test.save_file(fileName);
    
    cout << "Done" << endl;

    return 0;
}
