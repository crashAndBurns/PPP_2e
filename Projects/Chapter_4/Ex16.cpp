// Name: Find the Mode
// Author: Frank E. Ciszek
// Date: 12/12/2024
// Purpose: Exercise from chapter 4 in the book Programming, Principles,
// and practices by Bjarne Stroustrup. Write a program to find the mode
// of a series of positive integers.

#include "std_lib_facilities.h"

double findMode(vector <double>);

int main() {
    vector <double> nums {1, 2, 3, 3, 4, 5, 6, 6, 7, 8, 6};
    double mode = findMode(nums);

    cout << "The mode is: " << mode << endl;

    return 0;
}

double findMode(vector <double> vectorToCheck) {
    double mode = 0;

    if (vectorToCheck.size() == 0) {
        mode = 0;
    } else if (vectorToCheck.size() == 1) {
        mode = vectorToCheck[0];
    } else {
        int currentCount = 1;
        int maxCount = 1;
        sort(vectorToCheck);

        for (int i = 1; i < vectorToCheck.size(); i++) {  
            if (vectorToCheck[i] == vectorToCheck[i-1]) {
                currentCount++;
            } else {
                if (currentCount > maxCount) {
                    maxCount = currentCount;
                    mode = vectorToCheck[i-1];
                }
                currentCount = 1;
            }   
        }
    }
    return mode;
}