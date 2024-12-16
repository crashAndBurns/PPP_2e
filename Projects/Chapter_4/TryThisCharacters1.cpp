// Name: Character Table
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: Use the example in chapter 4 of the book Programming
// Practices and Principles by Bjarne Stroustrup to write a program
// that prints out:
// a    97
// b    98
// ...
// z    122
//
// Use a while loop for this program.

#include "std_lib_facilities.h"

int main() {

    char i = 'a';
    int j = 97;

    while (i <= 'z') {
        cout << i << "\t" << j << endl;
        ++i;
        ++j;
    }

    return 0;
}