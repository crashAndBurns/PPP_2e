// Name: Scores
// Author: Frank E. Ciszek
// Date: 12/16/2024
// Purpose: Write a program where you enter a set of name-and-value
// pairs like Joe 17 and Barbara 22. For each pair, add the name to
// a vector called names and the numer to a vector called scores.
// Put them in corresponding positions so that if names[7] == Joe
// then scores[7] == 17. Terminate input with NoName 0. Check that each
// name is unique and terminate with an error if a name is entered
// Twice.  Write out all the (name, score) pairs. One per line.

#include "std_lib_facilities.h"

bool isNameDuplicate(string, vector <string>);

int main() {
    vector <string> names;
    vector <int> scores;
    string nameToEnter;
    int scoreToEnter;

    cout << "Welcome to the score calculator. Enter a name and a score\n";
    cout << "separated by a space. A duplicate name results in an error.\n";
    cout << "Enter NoName 0 to terminate the input:\n";
    
    while (cin >> nameToEnter >> scoreToEnter && nameToEnter != "NoName") {
        if (!isNameDuplicate(nameToEnter, names)) {
            names.push_back(nameToEnter);
            scores.push_back(scoreToEnter);
        } else {
            cout << "Error: Duplicate Name Entered. Terminating Program" << endl;
            break;
        }   
    }

    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << ", " << scores[i] << endl;
    }
    
    return 0;

}

bool isNameDuplicate (string name, vector <string> vectorToCheck) {
    bool result;
    sort(vectorToCheck);

    for (string nameInVector : vectorToCheck) {
        if (name == nameInVector) {
            result = true;
        } else {
            result = false;
        }
    }
    return result;
}