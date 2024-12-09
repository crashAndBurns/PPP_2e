// Name: Miles to Kilometers.
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: Exercise from Chapter 3 of the book Programming Practices
// and Principles by Bjarne Stroustrup. Write a program taht prompts
// the user to enter three int values and then outputs the values
// in numerical order, separated by commas. If the user enters
// 10 4 6 the output should be 4, 6, 10. If two values are the same
// they should be ordered together. Ex. 4 5 4 should output
// 4, 4, 5.

#include "std_lib_facilities.h"

int main () {
    cout << "Enter three integers separated by spaces:\n";
      
    int val1, val2, val3;

    cin >> val1 >> val2 >> val3;

    int min, mid, max;
    min = mid = max = 0;

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
