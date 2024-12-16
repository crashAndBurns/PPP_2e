// Title: Find the median
// Author: Frank E. Ciszek
// Date: 12/10/2024
// Purpose: Exercise from chapter 4 of the book Programming, Principles,
// and Practices by Bjarne Stroustrup. Correct the program from chapter
// 4 in which we find the median of some numbers so that it ALWAYS
// prints out a median. Hint: a median need not be an element of 
// the sequence.

#include "std_lib_facilities.h"

int main() {
    vector <double> temps;

    // Read temperatures into vector
    for(double temp; cin >>  temp;) {
        temps.push_back(temp);
    }

    // compute mean temperature:
    double sum = 0.0;
    for (double x : temps) {
        sum += x;
    }
    cout << "Average temperature: " << sum / temps.size() << endl;

    // compute median temperature
    sort(temps);

    // if the size of the vector is odd then we can just use
    // the middle number. If its even we have to find the mean
    // of the two middle numbers.
    if (temps.size() % 2 != 0) {
        cout << "Median temperature: " << temps[temps.size() / 2] << endl;
    } else {
        cout << "Median temperature:" << (temps[temps.size() /  2] +
             temps[(temps.size() / 2) + 1]) / 2 << endl;
    }

    return 0;
}