// Name: Miles to Kilometers.
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: Exercise from Chapter 3 of the book Programming Practices
// and Principles by Bjarne Stroustrup. Write a program that
// stores two inter values. Determine the smaller, larger, sum,
// difference, product, a nd ratio of these values and report
// them to the user. Modify the program from exercise 4 to use
// doubles instead of ints. Compare the results to Ex4. Note, 
// Exercise 4 results in inaccurate results for the ratios of the
// ints entered because it performs integer division. 

#include "std_lib_facilities.h"

int main () {
    double val1 {0.0};
    double val2 {0.0};
    double difference {0.0};
    double product {0.0};
    double ratio {0.0};

    cout << "Enter two doubles separated by a space and hit enter:\n";
    cin >> val1 >> val2;

    if (val1 == val2) {
        cout << "The values are equal.\n";
    } else if (val1 > val2) {
        cout << val1 << " > " << val2 << endl;
    } else {
        cout << val2 << " > " << val1 << endl;
    }

    cout << val1 << " - " << val2 << " = " << val1 - val2 << endl;
    cout << val2 << " - " << val1 << " = " << val2 - val1 << endl;
    cout << "The product of " << val1 << " and " << val2 << " = " 
         << val1 * val2 << endl;
    cout << val1 << " / " << val2 << " = " 
         << val1 / val2 << endl; // Will result in truncated value
    cout << val2 << " / " << val1 << " = " 
         << val2 / val1 << endl; // will result in truncated value

    return 0;
}