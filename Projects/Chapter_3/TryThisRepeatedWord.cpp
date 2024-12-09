// Program Name: Operators Exercise
// Author: Frank E. Ciszek
// Date:  12/8/2024
// Purpose: Get "Repeated Word" example from ch3 of the book
// Programming Principles and Practices 2nd Edtion by
// Bjarne Stroustrup to run. Run it and enter the text from
// the book "She she laughed He He He because what he did 
// did not look very very good good." and analyze the text.

#include "std_lib_facilities.h"

int main () {
    string previous = " "; // previous word initialized to not a word
    string current; // Current word to check

    while (cin >> current) {
        // read a stream of  words
        if (previous == current) // Check if the word is the same as last
            cout << "repeated  word: " << current << '\n';
            previous = current;
    }
    return 0;
}

/*
 Analysis of the string:
 How many repeated words were there? 4
 What is the definition of a word used here? A group of characters
 separeated by white space.
 What is the definition of a repeated word? When string current
 word is exactly the same as the string previous word. For
 exampe She she is not a repeated word because strings are case
 sensitive. Likewise good good. is not a repeated word.
 */