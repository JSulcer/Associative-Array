// Authors: Jon Sulcer and Adam Chisolm
// Date: 12/2/17
// File: main.cpp
// Description: main driver for the associative array program

#include "associative.h"
using namespace std;

int main(){
   /*
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
    
    cout << "Done" << endl; */
    
    associative test;
    int userChoice = 0;
    
    string key, fileName;
    int value;
    
    cout << "Welcome!\n";
    cout << "Here is what you can do:\n"
         << "1 - Add a word\n"
         << "2 - Delete a word\n"
         << "3 - Import from file\n"
         << "4 - Export to file\n"
         << "5 - Find the value for a key\n"
         << "6 - Find the smallest key\n"
         << "7 - Find the largest key\n"
         << "8 - Print the tree\n"
         << "9 - Exit\n";
    cout << "Enter a command: ";
    cin >> userChoice;
    
    while (userChoice != 9)
    {
        if (userChoice == 1)
        {
            cout << "What word do you want to add: ";
            cin >> key;
            cout << "What should the value be (int): ";
            cin >> value;
            test.insert(key, value);
        }
        else if (userChoice == 2)
        {
            cout << "What would you like to delete: ";
            cin >> key;
            test.delete_index(key);
        }
        else if (userChoice == 3)
        {
            cout << "Enter an import file: ";
            cin >> fileName;
            test.import(fileName);
        }
        else if (userChoice == 4)
        {
            cout << "Enter a file name: ";
            cin >> fileName;
            test.save_file(fileName);
        }
        else if (userChoice == 5)
        {
            cout << "Enter a key: ";
            cin >> key;
            test.find(key);
        }
        else if (userChoice == 6)
        {
            test.min();
        }
        else if (userChoice == 7)
        {
            test.max();
        }
        else if (userChoice == 8)
        {
            test.print();
        }
        cout << "\nEnter a command:\n"
             << "1 - Add a word\n"
             << "2 - Delete a word\n"
             << "3 - Import from file\n"
             << "4 - Export to file\n"
             << "5 - Find the value for a key\n"
             << "6 - Find the smallest key\n"
             << "7 - Find the largest key\n"
             << "8 - Print the tree\n"
             << "9 - Exit\n";
        cout << "Enter a command: ";
        cin >> userChoice;
    }

    return 0;
}
