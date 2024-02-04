// This ensures that if this header file is used in more than one .cpp file that 
// only one definition of the function will exist across all consuming files.
#pragma once  

string GetString() {
    return "This is the else statemenet. :(\n";
}