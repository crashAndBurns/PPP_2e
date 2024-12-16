// Title: Convert Numbers
// Author: Frank E. Ciszek
// Date: 12/10/2024
// Purpose: Exercise from chapter 4 of the book Programming, Principles,
// and Practices by Bjarne Stroustrup. Make a vector holding ten
// string values "zero" through "nine". Use the vector in a program
// that converts a digit to it's spelled-out value. Use a loop to
// convert spelled out numbers into their digit form as well.

#include "std_lib_facilities.h"

int convertToInt(string);
bool inVector(string, vector <string>);
int convertToDigit(string);

int main() {
    vector <string> englishNumbers {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
    };

    cout << "Enter the number to convert, you may enter an integer\n";
    cout << "or english language equivalent. Enter '|' to exit.\n";

    string entry;

    while (cin >> entry) {
        if (entry == "|") {
            break;
        } else if (entry >= "0" && entry <= "9") {
            cout << englishNumbers[convertToInt(entry)] << endl;
        } else if (inVector(entry, englishNumbers)) {
            cout << convertToDigit(entry) << endl;
        } else {
            cout << "I don't know what that means.\n";
            cout << "Enter the number to convert:\n";
        }
    }
}

int convertToInt(string entry) {
    int result = false;

    if (entry == "0") {
        result = 0;
    } else if (entry == "1") {
        result = 1;
    } else if (entry == "2") {
        result = 2;
    } else if (entry == "3") {
        result = 3;
    } else if (entry == "4") {
        result = 4;
    } else if (entry == "5") {
        result = 5;
    } else if (entry == "6") {
        result = 6;
    } else if (entry == "7") {
        result = 7;
    } else if (entry == "8") {
        result = 8;
    } else if (entry == "9") {
        result = 9;
    }

    return result;
}

bool inVector(string entry, vector <string> myVector) {
    bool result = false;
    sort(myVector);
    for (string word : myVector) {
        if (entry == word) {
            result = true;
            break;
        }
    }
    return result;
}

int convertToDigit(string entry) {
    int result = -1;
    if (entry == "zero") {
        result = 0;
    } else if (entry == "one") {
        result = 1;
    } else if (entry == "two") {
        result = 2;
    } else if (entry == "three") {
        result = 3;
    } else if (entry == "four") {
        result = 4;
    } else if (entry == "five") {
        result = 5;
    } else if (entry == "six") {
        result = 6;
    } else if (entry ==  "seven") {
        result = 7;
    } else if (entry == "eight") {
        result = 8;
    } else if (entry == "nine") {
        result = 9;
    } else {
        result;
    }
    return result;
}