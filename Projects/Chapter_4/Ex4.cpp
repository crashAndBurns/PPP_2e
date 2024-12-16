// Title: Guessing Game
// Author: Frank E. Ciszek
// Date: 12/10/2024
// Purpose: Exercise from chapter 4 of the book Programming, Principles,
// and Practices by Bjarne Stroustrup. Write a program to play a 
// numbers guessing game. The user thinks of a number between 1 and 100.
// The program will figure out what the number is by asking questions.
// The program should figure it  out by asking 7 or fewer questions.
// Use the < and <= operators and the if-else construct.

#include "std_lib_facilities.h"
int midpoint(int, int);

int main() {
    int min = 1;
    int max = 100;
    
    cout << "This is a numbers guessing game.\n";
    cout << "Think of a number between " << min << " and " << max << ".\n";
    cout << "Enter (l)arger, (s)maller, or (c)orrect fore each guess.\n";
    
    char response = ' ';
    int count = 0;

    while (response != 'c') {
        int guess = midpoint(min, max);
        cout << "My guess is " << guess << endl;
        cout << "Is this guess (l)arger, (s)maller, or (c)orrect?\n";
        cin >> response;
        
        if (response == 'c') {
            count++;
            cout << "I guessed correctly and it took " << count
                 << " tries!" << endl;
        } else if (response == 'l') {
            guess = midpoint(min, max);
            max = guess - 1;
            count++;
        } else if (response == 's') {
            guess = midpoint(min, max);
            min = guess;
            count++;
        } else {
            cout << "IDK what that means.";
            cout << "Is this guess (l)arger, (s)maller, or (c)orrect?\n";
            cin >> response;
        }

    }
    return 0;
}

int midpoint(int min, int max) {
    return (min + max) / 2;
}