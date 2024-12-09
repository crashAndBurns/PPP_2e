// Name: Miles to Kilometers.
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: Exercise from Chapter 3 of the book Programming Practices
// and Principles by Bjarne Stroustrup. Write a program that
// converts miles to kilometers. Include a prompt for the user
// to enter the number of miles. There are 1.609 kilometers per mile.

#include "std_lib_facilities.h"

int main () {
    double numMiles {0};
    double kmPerMile {1.609};
    double numKilometers {0};

    cout << "Enter the number of miles to convert to km:\n";
    cin >> numMiles;

    numKilometers = numMiles * kmPerMile;

    cout << "Ther are " << numKilometers << " in " << numMiles 
         << " miles.\n";

    return 0;
}


