// Title: The Chessboard
// Author: Frank E. Ciszek
// Date: 12/10/2024
// Purpose: Exercise from chapter 4 of the book Programming, Principles,
// and Practices by Bjarne Stroustrup. Write a program to address the 
// Chess rice per chess square puzzle in chapter 4. Calculate how many
// squares are required for at least 1000 grains of rice, at least 1,000,000
// and at least 1,000,000,000;

#include "std_lib_facilities.h"

int main() {
    int grainsOnPrevious = 0;
    for (int squareNum = 1, grainsOnCurrent = 1, totalGrains = 0, count = 0; squareNum <= 64, totalGrains <= 1000000000; squareNum++, grainsOnCurrent *= 2) {
        cout << "Square number: " << squareNum << endl;
        cout << "Grains on previous square: " << grainsOnPrevious << endl;
        cout << "Grains on current square: " << grainsOnCurrent << endl;
        totalGrains = grainsOnPrevious += grainsOnCurrent;
        cout << "Total grains " << totalGrains << endl;
    }
}