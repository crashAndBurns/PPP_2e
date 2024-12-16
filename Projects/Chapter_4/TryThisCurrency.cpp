// Name: Foreign Currency to Dollars
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: Use the example in chapter 4 of the book Programming
// Practices and Principles by Bjarne Stroustrup to write a program
// that converts yen ('y'), kroner ('k'), and pounds ('p')  into dollars.
// Find the conversion factors on the internet if you'd like.

#include "std_lib_facilities.h"

// Convert from foreign currency to US dollars
// A suffix of 'y' 'k' or 'p' indicates the currency to convert
// to US dollars. Any other suffix is an error.
int main() {
    constexpr double yenRate {1.5}; // Number yen per dollar
    constexpr double kronerRate {2.0};  // Number kroner per dollar
    constexpr double poundRate {0.95};  // Number pounds per dollar

    double foreignAmount {0};
    char unit = ' ';

    cout << "Please enter a the amount of foreign currency\n";
    cout << "followed by the type of currency to convert to us dollars\n";
    cout << "(y, k, or p):\n";
    
    cin >> foreignAmount >> unit;

    if (unit == 'y') {
        cout << foreignAmount << " Yen = " << "$" << foreignAmount / yenRate
             << endl;
    } else if (unit == 'k') {
        cout << foreignAmount << " Kroner = " << "$" << foreignAmount / kronerRate
             << endl;
    } else if (unit == 'p') {
        cout << foreignAmount << " Pounds = " << "$" << foreignAmount / poundRate
             << endl;
    } else {
        cout << unit << " is not a valid unit." << endl;
    }


    return 0;
}