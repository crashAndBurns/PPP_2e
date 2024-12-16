// Name: Character Table
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: Use the example in chapter 4 of the book Programming
// Practices and Principles by Bjarne Stroustrup to write a program
// that implements square() without usign the multiplication operator
// for the x * x by repeated addition. Start a variable result at 0
// and add x to it x times. Then run your version of "The first program"
// using that square().

#include "std_lib_facilities.h"

// Square function. Takes one integer x as parameter.
// This is the number to square. The function adds x to itself x 
// times in order to square a number without using multiplication.
// returns an integer, result, which is the square of the parameter.
int square(int x){
    int result = 0;
    for (int i = 0; i < x; ++i) {
        result += x;
    }

    return (result);
}

// The main function is quite simple. By using a function we can
// compartmentalize specific actions. Each function has it's own 
// specific purpose. square squares the number and main prints out
// the output. Note: I was trying to do this using on the main function
// at first. All the while I was thinking "This would be alot easier if
// I could use a function." 
int main() {
    for (int i = 0; i < 100; ++i) {
        cout << i << " squared = " << square(i) << endl;
    }

    return 0;
}