// Name: Min, Max, Mode of Strings
// Author: Frank E. Ciszek
// Date: 12/15/2024
// Purpose: Write a program that finds the min, max, and mode
// of a sequence of strings.

#include "std_lib_facilities.h"

string findMode(vector <string>);
string findMax(vector <string>);
string findMin(vector <string>);

int main() {
    vector <string> vectorOfStrings {"a", "b", "a", "d", "q", "s", "r"};

    cout << "The min of the strings is " << findMin(vectorOfStrings) << endl;    
    cout << "The max of the strings is " << findMax(vectorOfStrings) << endl;
    cout << "The mode of the strings is " << findMode(vectorOfStrings) << endl;


    return 0;
}

string findMin(vector <string> vectorToTest) {
    string min = " ";

    if (vectorToTest.size() == 0) {
        cout << "Can not find the min of an empty vector!" << endl;
    } else if (vectorToTest.size() == 1) {
        min = vectorToTest[0];
    } else {
        sort(vectorToTest);
        min = vectorToTest[0];
    }
    return min;
}


string findMax(vector <string> vectorToTest) {
    string max = " ";

    if (vectorToTest.size() == 0) {
        cout << "Can not find max of an empty vector!" << endl;
    } else if (vectorToTest.size() == 1) {
        max = vectorToTest[0];
    } else {
        sort(vectorToTest);
        int i = vectorToTest.size();
        max = vectorToTest[i - 1];
    }
    return max;
}

string findMode(vector <string> vectorToTest) {
    string mode = " ";

    if (vectorToTest.size() == 0) {
        cout << "Can not find mode of an empty vector!" << endl;
    } else if (vectorToTest.size() == 1) {
        mode = vectorToTest[0];
    } else {
        int currentCount = 1;
        int maxCount = 1;
        sort(vectorToTest);

        for (int i = 1; i < vectorToTest.size(); i++) {
            if (vectorToTest[i] == vectorToTest[i - 1]) {
                currentCount++;
            } else {
                if (currentCount > maxCount) {
                    maxCount = currentCount;
                    mode = vectorToTest[i - 1];
                }
                currentCount = 1;
            } 
        }
    }
    return mode;
}
