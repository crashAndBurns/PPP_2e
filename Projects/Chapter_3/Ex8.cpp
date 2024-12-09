// Name: Even or odd integer
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: Tests an integer to see if it's even or odd.
// Note, an integer is even if when divided by 2 the remainder is 0

#include "std_lib_facilities.h"

int main () {
    cout << "Enter the number to test:\n";
    int num;
    cin >> num;

    if (num % 2 == 0) {
        cout << "The number " << num << " is even.\n";
    } else {
        cout << "The number " << num << " is odd.\n";
    }

    return 0;
}