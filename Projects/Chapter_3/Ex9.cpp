// Name: Even or odd integer
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: convert spelled-out  numbers such as "zero" and "two"
// into digits such as 0 and 2. When the user inputs a number the
// program should output the digit. Perform this task for the
// values 0, 1, 2, 3, 4 and write out "not a number I know" for
// invalid values etc.

#include "std_lib_facilities.h"

int main () {

    int zero, one, two, three, four;
    zero = 0;
    one = 1;
    two = 2;
    three = 3;
    four = 4;

    cout << "Enter a string to convert to a number\n";
    string number;
    cin >> number;
    
    if (number == "zero") {
        cout << "The string " << number << " converts to " << zero << endl;
    } else if (number == "one") {
        cout << "The string " << number << " converts to " << one << endl; 
    } else if (number == "two") {
        cout << "The string " << number << " converts to " << two << endl;
    } else if (number == "three") {
        cout << "The string " << number << " converts to " << three << endl;
    } else if (number == "four") {
        cout << "The string " << number << " converts to " << four << endl; 
    } else {
        cout << "Not a number I know!" << endl;
    }


    return 0;
}