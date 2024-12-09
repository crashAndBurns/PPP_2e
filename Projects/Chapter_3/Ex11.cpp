// Name: Coins
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: Write a program that prompts the user for some number
// of pennies, nickles, dimes, quarters, half dollars, and one-dollar
// coins. Query the user separately for each type of coin then print out
//  Number pennies
// Number nickles
// Number dimes
// Number quarters
// Number half dollars
// Number dollars
// The value of all the coins.
//
// If only one coin is reported make the output gramatically correct
// report the sum in dollars and cents not total cents

#include "std_lib_facilities.h"

int main() {
    int pennies;
    int nickles;
    int dimes;
    int quarters;
    int halfDollars;
    int dollars;

    cout << "Enter the number of pennies you have:\n";
    cin >> pennies;
    cout << "Enter the number of nickles you have:\n";
    cin >> nickles;
    cout << "Enter the number of dimes you have:\n";
    cin >> dimes;
    cout << "Enter the number of quarters you have:\n";
    cin >> quarters;
    cout << "Enter the number of half-dollars you have:\n";
    cin >> halfDollars;
    cout << "Enter the number of dollars you have:\n";
    cin >> dollars;

    if (pennies == 1) {
        cout << "You have " << pennies << "penny\n";
    } else {
        cout << "You have " << pennies << "pennies\n";
    }

    if (nickles == 1) {
        cout << "You have " << nickles << "nickle\n";
    } else {
        cout << "You have " << nickles << "nickles\n";
    }

    if (dimes == 1) {
        cout << "You have " << dimes << "dime\n";
    } else {
        cout << "You have " << dimes << "dimes\n";
    }

    if (quarters == 1) {
        cout << "You have " << quarters << "quarter\n";
    } else {
        cout << "You have " << quarters << "quarters\n";
    }

    if (halfDollars == 1) {
        cout << "You have " << halfDollars << "half-dollar\n";
    } else {
        cout << "You have " << halfDollars << "half-dollars\n";
    }

    if (dollars == 1) {
        cout << "You have " << dollars << "dollar\n";
    } else {
        cout << "You have " << dollars << "dollars\n";
    }

    cout << "The value of all your coins is " <<
         (
            pennies * .01 +
            nickles * .05 +
            dimes * .10 +
            quarters * .25 +
            halfDollars * .50 +
            dollars * 1.00
         ) << endl;
return 0;
}