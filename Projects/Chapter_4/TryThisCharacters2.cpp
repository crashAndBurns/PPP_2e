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
// Use a for loop for this program.
// Also add functionallity for uppercase letters and digits

#include "std_lib_facilities.h"

// Had to get creative with the for loop and use a cast.
int main() {
    for (char i = 'A'; i <= 'z'; ++i) {
        cout << i <<  "\t" << static_cast <int> (i) + 1 << endl;
    }

    return 0;
}