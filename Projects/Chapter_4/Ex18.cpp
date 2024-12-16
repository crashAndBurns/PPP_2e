// Name: Quadratic Equation Solver
// Author: Frank E. Ciszek
// Date: 12/15/2024
// Purpose: Write a program to solve quadratic equations given in the
// form ax^2 + bx + c = 0. Use doubles for the user inputs from a, b, and
// c. There are always two solutions to a quadratic equation. Output them
// to x1 and x2;

#include "std_lib_facilities.h"

int main() {
    double a;   // Coefficient of x^2
    double b;   // Coefficient of x
    double c;   // Constant
    double x1 = 0;  // First Answer
    double x2 = 0;  // Second Answer

    cout << "Welcome to the quadratic solver." << endl;
    cout << "Enter a, b, and c as doubles separted by spaces.\n";
    cin >> a >> b >> c;

    double denominator = 2 * a;
    double discriminant = (b * b) - (4 * a * c);
    
    if (denominator == 0) {
        cout << "Can not divide by zero!" << endl;
    } else if (discriminant < 0) {
        cout << "Discriminant results in imaginary solutions!" << endl;
    } else {
        double numerator1 = -b + sqrt(discriminant);
        double numerator2 = -b - sqrt(discriminant);
        x1 = numerator1 / denominator;
        x2 = numerator2 / denominator;

        cout << "The discriminant = " << discriminant << "." << endl;
        cout << "First real solution = " << x1 << "." << endl;
        cout << "Second real soltuion = " << x2 << "." << endl;
    }
    return 0;
}

