// Name: Foreign Currency to Dollars
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: Use the example in chapter 4 of the book Programming
// Practices and Principles by Bjarne Stroustrup to write a program
// that converts yen ('y'), kroner ('k'), and pounds ('p')  into dollars.
// Find the conversion factors on the internet if you'd like. Use a 
// switch statement in this project.

// For me the switch statement is easier to read than several if
// statements chained together. It is also easier to understand because
// each instance of the case is labled. I feel like using a switch 
// statement makes the program easily scalable as well. It would be very
// easy to add a fourth or fifth currency conversion to this program. 
// It is possible, of course, using if statements but I feel that it
// might get messy and difficult to read. Finally, there seems to be
// less actual code with the switch statement. The start and end of each
// case is also clearly marked using case and break respectively.

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

    switch (unit) {
        case 'y': {
            cout << foreignAmount << " Yen = $" << foreignAmount / yenRate
                 << endl;
            break;
        }

        case 'k': {
            cout << foreignAmount << " Kroner = $" << foreignAmount / kronerRate
                 << endl;
            break;
        }

        case 'p': {
            cout << foreignAmount << " pounds = $" << foreignAmount / poundRate
                 << endl;
            break;
        }

        default: {
            cout << unit << " is not a valid entry!" << endl;
        }


    }

    return 0;
}