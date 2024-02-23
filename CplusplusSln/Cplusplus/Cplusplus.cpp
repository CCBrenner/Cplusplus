// Cplusplus.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
using namespace std;
#include "GetStringFunction.h"

int main()
{
    bool boolean = false;
    MyClass newInstance;
    vector<string> ducks = { "Zach", "Kyle", "Todd", "Beastie" };  // array

    for (string duck : ducks) {  // for-each loop
        cout << duck << endl;
    }

    ducks[3] = "Tiffany";

    int size = ducks.size();
    cout << "Size of ducks vector: " << size << endl;
    newInstance.printAllArrayElements(ducks);
    
    if (boolean) {
        cout << "Hello World!" << endl;
    }
    else {
        cout << GetString();
        //cout << newInstance.myFunction();
        //cout << newInstance.myPrivateFunction();
    }
    cin.get();
}


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
