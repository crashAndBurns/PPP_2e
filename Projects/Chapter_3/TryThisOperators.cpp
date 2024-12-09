// Program Name: Operators Exercise
// Author: Frank E. Ciszek
// Date:  12/8/2024
// Purpose: Get "Operators Exersie" example from ch3 of the book
// Programming Principles and Practices 2nd Edtion by
// Bjarne Stroustrup to run. Modify it to read a int rather
// than a double.

#include "std_lib_facilities.h"

int main () {
    cout << "Please enter an integer value: ";
    int n;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n + 1
         << "\nthree times n == " << n * 3
         << "\ntwice n == " << n * 2
         << "\nn squared == " << n * n
         << "\nhalf of n == " << n/2
         << "\nsquare root of n == " << sqrt(n)
         << '\n'; // name for newline ("end of line") output

    return 0;
}