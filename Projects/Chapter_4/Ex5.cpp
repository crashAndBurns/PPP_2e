// Title: Simple Calculator
// Author: Frank E. Ciszek
// Date: 12/10/2024
// Purpose: Exercise from chapter 4 of the book Programming, Principles,
// and Practices by Bjarne Stroustrup. Write a simple calculator.
// it shoult take three entries, two doubles and an operator
// (+, -, *, and /). The program should perform the operation on the
// two operands. The output should look something like :
// The sum of 35.6 and 24.1 is 59.7.

#include "std_lib_facilities.h"

int main() {
    
    cout << "This is a calculator. Please enter two doubles\n";
    cout << "followed by an operand. Separate entries using spaces.\n";
    cout << "Valid operators are +, -, *, and /\n";
    
    double num1, num2;
    char sign;

    cin >> num1 >> num2 >> sign;

    switch (sign) {
        case '+' : 
        cout << "The sum of " << num1 << " and " << num2 << " is "
             << num1 + num2 << endl;
        break;

        case '-' : 
        cout << "The difference of " << num1 << " and " << num2 << " is "
             << num1 - num2 << endl;
        break;

        case '*' : 
        cout << "The product of " << num1 << " and " << num2 << " is "
             << num1 * num2 << endl;
        break;

        case '/' : 
        cout << "The sum of " << num1 << " and " << num2 << " is "
             << num1 + num2 << endl;
        break;

        default : {
            cout << "Invalid entry." << endl;;
        }
    }
}