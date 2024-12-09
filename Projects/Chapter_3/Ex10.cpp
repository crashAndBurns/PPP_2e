// Name: Operations
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: write a program that takes an operation followed by
// two operands and outputs the result.
// Ex. + 100 3.14 or * 4 5
// Read the operation into a string called operation to figure out
// which operation the user wants. Read the operands into doubles.
// Implement this for operations called +, -, *, /, plus, minus, mul,
// and div.

#include "std_lib_facilities.h"

int main() {
    cout << "enter operator and two operands separated by spaces.\n";
    cout << "Valid operators are +, -, *, /, plus, minus, mul, and div.\n";
    cout << "Valid operands are integers and doubles:\n";

    string operation;
    double val1;
    double val2;
    double result {0};

    cin >> operation >> val1 >> val2;

    if (operation == "+" || operation == "plus") {
        result = val1 + val2;
        cout << val1 << " + " << val2 << " = " << result << endl; 
    } else if (operation == "-" || operation == "minus") {
        result = val1 - val2;
        cout << val1 << " - " << val2 << " = " << result << endl; 
    } else if (operation == "*" || operation == "mul") {
        result = val1 * val2;
        cout << val1 << " * " << val2 << " = " << result << endl;
    } else if (operation == "/" || operation == "div") {
        result = val1 / val2;
        cout << val1 << " / " << val2 << " = " << result << endl;
    }

    return 0;
}