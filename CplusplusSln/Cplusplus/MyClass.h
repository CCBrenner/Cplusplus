#pragma once

#include <iostream>
#include <vector>
using namespace std;

class MyClass {
public:
    string myFunction() {
        return myPrivateFunction();
    }
    void printAllArrayElements(vector<string> strings) {
        for (string i : strings) {
            cout << i << endl;
        }
    }
private:
    string myPrivateFunction() {
        return "This is a PRIVATE return statement.";
    }
};
