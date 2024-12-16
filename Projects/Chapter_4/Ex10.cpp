// Title: Rock Paper Scissors
// Author: Frank E. Ciszek
// Date: 12/10/2024
// Purpose: Exercise from chapter 4 of the book Programming, Principles,
// and Practices by Bjarne Stroustrup. Write a program to play the game
// Rock-Paper-Scissors. Use a switch statement to solve the exercise.
// Use a v ector with a sequence of values to be uses as the next value.
// Try letting the user enter some values. 

// The rules for RPS are as follows.
// Paper > Rock > Scissors
// Scissors > Paper > Rock
// Rock > Scissors > Paper

#include "std_lib_facilities.h"

int main() {
    vector <char> options {'r', 'p', 's'};
    char userChoice = ' ';

    cout << "We're playing (r)ock (p)aper (s)cissors. Please enter\n";
    cout << "r, p, or s below. Enter | to forfeit.\n";
    cout << "Incorrect input results in a loss for\n";
    cout << "That round.\n";

    int wins = 0;
    int losses = 0;
    bool isForfeit = false;
    
    for (char option : options) {
        cin >> userChoice;
        
        if (userChoice == '|') {
            isForfeit = true;
            break;
        } else {
            switch (userChoice) {
                case 'r' : {
                    if (option == 's') {
                        cout << "You win this round.\n";
                        wins ++;
                    } else if (option == 'p') {
                        cout << "You lose this round.\n";
                        losses++;
                    } else {
                        cout << "A tie!\n";
                    }
                    break;
                }

                case 'p' : {
                    if (option == 'r') {
                        cout << "You win this round.\n";
                        wins++;
                    } else if (option == 's') {
                        cout << "You lose this round.\n";
                        losses++;
                    } else {
                        cout << "A tie!\n";
                    }
                    break;
                }

                case 's' : {
                    if (option == 'p') {
                        cout << "You win this round.\n";
                        wins++;
                    } else if (option == 'r') { 
                        cout << "You lose this round.\n";
                        losses++;
                    } else {
                        cout << "A tie!\n";
                        break;
                    }

                default : {
                    cout << "Invalid entry. You lose this round.\n";
                    losses++;
                    }
                }
            }
        }
    }
    if (isForfeit) {
        cout << "You forfeit. Better luck next time.\n";
    } else if (wins > losses) {
        cout << "You win this game.\n";
    } else if (wins < losses) {
        cout << "You lose this game.\n";
    } else {
        cout << "The game is tied.\n";
    }
}