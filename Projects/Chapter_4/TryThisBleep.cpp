// Name: Character Table
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: Use the example in chapter 4 of the book Programming
// Practices and Principles by Bjarne Stroustrup to write a program
// that bleeps out words you don't like. Read in words using cin and
// print them again using cout. If a word is among the few defined
// write BLEEP instead of the word. Start with one disliked word such
// as string disliked = "Broccoli" then add a few more.

#include "std_lib_facilities.h"

bool filterWords(string);

int main() {
    vector <string> words;
    for (string temp; cin >> temp;) {
        words.push_back(temp);
    }

    for (int i = 0; i < words.size(); ++i) {
        if (filterWords(words[i])) {
            cout << "BLEEP" << endl;
        } else {
            cout << words[i] << endl;
        }
    }

    return 0;
}

bool filterWords (string word) {
    vector <string> disliked = {
        "broccoli",
        "chad",
        "cold",
    };
    bool result = false;

    for (int i = 0; i < disliked.size(); ++i) {
        if (word == disliked[i]) {
            result = true;
        } else { 
            result;
         }   
    }
    return result;
}