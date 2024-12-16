// Title: A better Calculator
// Author: Frank E. Ciszek
// Date: 12/10/2024
// Purpose: Exercise from chapter 4 of the book Programming, Principles,
// and Practices by Bjarne Stroustrup. Modify the "mini calculator" from
// exercise 5 to accept only single-digit numbers written as either 
// digits or spelled out.

#include "std_lib_facilities.h"

bool isValidEntry(string, string, char, vector <string>);
bool isInVector(string, string, vector <string>);
int convertToDigit(string);


int main() {
        vector <string> validEntries {
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
        "0",
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
    };

    cout << "This is a calculator app. Please enter two single digit\n";
    cout << "numbers (either as digits or english equivalents) followed\n";
    cout << "by an operator. All entries should be separated by spaces.\n";
    cout << "Valid operators are +, -, *, and /\n";

    string num1, num2;
    char sign;

    while (cin >> num1 >> num2 >> sign) {
        if (isValidEntry(num1, num2, sign, validEntries)) {
            // if they're "digits" convert to digit
            // if they're words convert to digit

            switch (sign) {
                case '+' : {
                    cout << convertToDigit(num1) + convertToDigit(num2) << endl;
                    break;
                }

                case '-' : {
                    cout << convertToDigit(num1) - convertToDigit(num2) << endl;
                    break;
                }

                case '*' : {
                    cout << convertToDigit(num1) * convertToDigit(num2) << endl;
                    break;
                }

                case '/' : {
                    cout << static_cast <double> (convertToDigit(num1)) / convertToDigit(num2) << endl;
                    break;
                }

            }

        } else {
            cout << "I don't understand your entry, please try again.\n";
            cout << "Enter the expression below.\n";
        }
    }
    return 0;
}

bool isValidEntry(string num1, string num2, char sign, vector <string> myVector) {
    bool result = false;

    if (sign == '+' || sign == '-' || sign == '*' || sign == '/') {
        result = true;
    }

    if (isInVector(num1, num2, myVector)) {
        result = true;
    }

    return result;
}

bool isInVector(string num1, string num2, vector <string> myVector) {
    bool result = false;
    sort(myVector);
    for (string word: myVector) {
        if (num1 == word && num2 == word) {
            result = true;
            break;
        }
    }

    return result;
}

int convertToDigit(string num) {
    int result = -1;
    
    if (num == "0" || num == "zero") {
        result = 0;
    } else if (num == "1" || num == "one") {
        result = 1;
    } else if (num == "2" || num == "two") {
        result = 2;
    } else if (num == "3" || num == "three") {
        result = 3;
    } else if (num == "4" || num == "four") {
        result = 4;
    } else if (num == "5" || num == "five") {
        result = 5;
    } else if (num == "6" || num == "six") {
        result = 6;
    } else if (num == "7" || num == "seven") {
        result == 7;
    } else if (num == "8" || num == "eight") {
        result = 8;
    } else if (num == "9" || num == "nine") {
        result = 9;
    }
    return result;
}