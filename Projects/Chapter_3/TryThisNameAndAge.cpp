// Program Name: Name and Age
// Author: Frank E. Ciszek
// Date:  12/8/2024
// Purpose: Get "Name and Age" example from ch3 of the book
// Programming Principles and Practices 2nd Edtion by
// Bjarne Stroustrup to run. Modify the program to write
// out the age in months. Use a double to allow for children
// who are very proud of their fractional age.

#include "std_lib_facilities.h"

int main () {
    cout << "Please enter your first name and age.\n";
    string first_name = "???"; // "???" means don't know the name
    double age = 0.0; // 0 means don't know the age
    cin >> first_name >> age; // read a string followed by a double
    cout << "Hello, " << first_name << " " << "(age " << age * 12 << ")\n";

    return 0;
}