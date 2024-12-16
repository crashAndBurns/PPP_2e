// Name: Prime Numbers between 1 and 100;
// Author: Frank E. Ciszek
// Date: 12/11/2024;
// Purpose: Create a program to find all the prime numbers between 
// 1 and 100. Write a function that will check if a number is prime.
// Write a loop that goes from 1 to 100, checks if each number is prime,
// and stores each prime in a vector. Write another loop to list the
// primes you found. Consider 2 the first prime. This program uses the sieve of eratosthenes
// method of finding prime numbers as found in the isPrime function.

#include "std_lib_facilities.h"

bool isPrime(int);

int main() {
    vector <int> primesList;

    for (int i = 1; i <= 100; i++) {
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