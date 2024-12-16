// Title: Compare numbers
// Author: Frank E. Ciszek
// Date: 12/9/2024
// Purpose: Drill from chapter 4 of the book Programming, Principles,
// and Practices by Bjarne Stroustrup. In this program we use a while
// loop that initially reads two ints and then prints them. We exit
// the program when a terminating '|' is entered. Then we go through
// several steps where we augment and change the program to do perform
// different actions or use different data.

#include "std_lib_facilities.h"

constexpr double cmPerMeter = 100.00;
constexpr double cmPerInch = 2.54;
constexpr double inPerFt = 12.0;

double convertToCm(double, string);
void prompt();
void printStatement(double, double, string, string);
bool isLegalUnit(string);
double convertToMeters(double, string);

int main() {
    prompt();
    
    double num;
    string unit;

    cin >> num >> unit;
    
    double max = convertToCm(num, unit);
    double min = convertToCm(num, unit);
    double maxPrint = num;
    double minPrint = num;
    string maxUnit = unit;
    string minUnit = unit;
    double sumValues = 0;
    int numValues = 0;
    vector <double> numsEntered;

    if (isLegalUnit(unit)) {
        cout << num << " " << unit << " was entered.\n";
        printStatement(num, num, unit, unit);
        sumValues += convertToMeters(num, unit);
        numValues++;
        numsEntered.push_back(convertToMeters(num, unit));
        prompt();
    } else {
        cout << "An illegal unit was entered.\n";
        prompt();
    }

    while (cin >> num >> unit) {
        if (isLegalUnit(unit)) {
            if (convertToCm(num, unit) >= max) {
                max = convertToCm(num, unit);
                maxPrint = num;
                maxUnit = unit;
                sumValues += convertToMeters(num, unit);
                numValues++;
                numsEntered.push_back(convertToMeters(num, unit));
                prompt();
            }

            if (convertToCm(num, unit) <= min) {
                min = convertToCm(num, unit);
                minPrint = num;
                minUnit = unit;
                sumValues += convertToMeters(num, unit);
                numValues++;
                numsEntered.push_back(convertToMeters(num, unit));
                prompt();
            }

            cout << num << " " << unit << " was entered.\n";
            printStatement(minPrint, maxPrint, minUnit, maxUnit);
            prompt();
        } else {
            cout << "An illegal unit was entered.\n";
            prompt();
        }
        
    } 
    
    printStatement(minPrint, maxPrint, minUnit, maxUnit);
    cout << "number values entered = " << numValues << endl;
    cout << "sum of values entered (in meters) = " << sumValues << endl; 
    cout << "Valid numbers entered: \n";
    cout << "Valid numbers entered (in meters):\n";
    sort(numsEntered);
    for (double nums: numsEntered) {
        cout << nums << " m" << endl;
    }

    return 0;      
}

void prompt() {
    cout << "Enter a double followed by its unit designation.\n";
    cout << "Enter '|' to exit:\n";
}

void printStatement(double min, double max, string minUnit, string maxUnit) {
    cout << max << " " << maxUnit << " largest value so far.\n";
    cout << min << " " << minUnit << " smallest value so far.\n";
}

double convertToCm(double num, string unit) {
    if (unit == "m") {
        num *= cmPerMeter;
    } else if (unit == "in") {
        num *= cmPerInch;
    } else if (unit == "ft") {
        num *= cmPerInch * inPerFt;
    }
    return num;
}

bool isLegalUnit(string unit) {
    bool isLegal = false;
    
    if (unit == "cm" || unit == "m" || unit  == "in" || unit == "ft") {
        isLegal = true;
    }

    return isLegal;
}

double convertToMeters(double num, string unit) {
    return convertToCm(num, unit) / cmPerMeter;
}

