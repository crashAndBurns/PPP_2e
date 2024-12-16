// Name: Scores Lookup
// Author: Frank E. Ciszek
// Date: 12/16/2024
// Purpose: Modify the program from exercise 19 so that when you enter 
// a name the program will output the corresponding score or "name not
//  found".

#include "std_lib_facilities.h"

bool isNameDuplicate(string, vector <string>);
bool isNameInVector(string, vector <string>);
int findIndex(string, vector <string>);

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

    cout << "Enter a name and I will return the score associated\n";
    cout << "With that name or else I will return name not found.\n";
    cout << "Enter Exit to end.\n";

    string nameToFind;
    while (cin >> nameToFind && nameToFind != "Exit") {
        if (isNameInVector(nameToFind, names)) {
           int index = findIndex(nameToFind, names);
           if (index != -1) {
            cout << names[index] << ", " << scores[index] << endl;
           }
        } else {
            cout << "Name not found." << endl;
        }
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

bool isNameInVector (string name, vector <string> vectorToCheck) {
    bool result;
    
    for (string aName : vectorToCheck) {
        if (name == aName) {
            result = true;
            break;
        } else {
            result = false;
        }
    }
    return result;
}

int findIndex (string name, vector <string> vectorToCheck) {
    int result = 0;
    for (int i = 0; i < vectorToCheck.size(); i++) {
        if (name == vectorToCheck[i]) {
            result = i;
            break;
        } 
    }
    return result;
}