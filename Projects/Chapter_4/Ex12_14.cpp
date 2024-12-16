// Name: Prime Numbers between 1 and Max;
// Author: Frank E. Ciszek
// Date: 12/11/2024;
// Purpose: Exercise from chapter 4 of the book Programming Principles
// and Practices by Bjarne Stroustrup. Modify the program you wrote for
// exercise 11 so that it takes an in put value max and findds all the 
// prime numbers from 1 to max. This program uses the sieve of eratosthenes
// method of finding prime numbers as found in the isPrime function.

#include "std_lib_facilities.h"

bool isPrime(int);

int main() {
    vector <int> primesList;
    int max = 0;

    cout << "Enter the max number. I will find all the prime numbers\n";
    cout << "Between 1 and the max:\n";
    
    cin >> max;

    for (int i = 1; i <= max; i++) {
        if (isPrime(i)) {
            primesList.push_back(i);
            }
        }

    for (int number : primesList) {
        cout << number << endl;
    }
    return 0;
}

bool isPrime(int  num) {
    bool result = true;

    if (num < 2) {
        result = false;
    }

    if (num % 2 == 0) {
        result = false;
    }

    if (num == 2) {
        result = true;
    }

    for (int i = 3; (i * i) <= num; i += 2) {
        if (num % i == 0) {
            result = false;
        }
    }
    return result;
}