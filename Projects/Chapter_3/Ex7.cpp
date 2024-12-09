// Name: Miles to Kilometers.
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: Exercise from Chapter 3 of the book Programming Practices
// and Principles by Bjarne Stroustrup. Write a program that prompts
// the user to enter three string values and then outputs the values
// in numerical order, separated by commas Much like the previous
// exercise.

#include "std_lib_facilities.h"

int main () {
    cout << "Enter three Strings separated by spaces:\n";
      
    string val1, val2, val3;

    cin >> val1 >> val2 >> val3;

    string min, mid, max;
    min = mid = max = "";

    if (val1 < val3) {
        min = val1;
        if (val2 < val3) {
            mid = val2;
            max = val3;
        } else {
            mid = val3;
            max = val2;
        }
    } else {
        min = val3;
        if (val1 < val2) {
            mid = val1;
            max = val2;
        } else {
            mid = val2;
            max = val1;
        }
    }

    cout << min << ", " << mid << ", " << max << endl;

}
