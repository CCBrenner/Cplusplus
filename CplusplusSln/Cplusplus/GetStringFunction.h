// "#pragma once" ensures that if this header file is used in more than one .cpp file that 
// only one definition of the function will exist across all consuming files.
#pragma once  
#include "MyClass.h"

string GetString() {
    MyClass myClass;
    std::string optionOne = "This is the alternative statemenet. :(\n";
    std::string optionTwo = myClass.myFunction();

    return optionTwo;
}
