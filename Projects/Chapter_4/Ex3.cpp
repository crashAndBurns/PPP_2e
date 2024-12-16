// Title: The Route
// Author: Frank E. Ciszek
// Date: 12/10/2024
// Purpose: Exercise from chapter 4 of the book Programming, Principles,
// and Practices by Bjarne Stroustrup. Read a sequence of double values
// into a vector. Treat the values like distances between cities on a
// given route. Compute and print the total distance. Find and print
// values for the smallest and greatest distance between neighboring
// cities. Find and print the mean distance between two neghboring cities.

#include "std_lib_facilities.h"

int main() {
    vector <double> distances;
    double numToRead = 0;
    double totalDistance = 0;

    while (cin >> numToRead) {
        distances.push_back(numToRead);
    }

    for (double value : distances) {
        totalDistance += value;
    }

    cout << "Total distance on this route is " << totalDistance 
         << endl;

    cout << "Mean distance between the two cities is "
         << totalDistance / distances.size() << endl;
}

