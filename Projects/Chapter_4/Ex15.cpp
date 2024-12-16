// Name: Primes to n
// Author: Frank E. Ciszek
// Date: 12/12/2024
// Purpose: Exercise from chapter 4 of the book Programming, Principles,
// and Practices By Bjarne Stroustrup. Write a program that takes an
// input value n and finds the first n primes.

#include "std_lib_facilities.h"

bool isPrime(int);

int main() {
    int n;
    cout << "Enter an integer, I will find the primes from 1 to the\n";
    cout << "number you enterd.\n";

    cin >> n;
    vector <int> primes;

    for (int i = 2, count = 0; count < n; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
            count++;
        }
    }

    for (int i = 0; i < size(primes); i++) {
        cout << primes[i] << endl;
    }

    return 0;
}

bool isPrime(int num) {
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