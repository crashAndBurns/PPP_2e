// Name: Form Letter
// Author: Frank E. Ciszek
// Date: 12/8/2024
// Purpose: Drill from chapter 3 in the book Programming Principles
// And Practices written by Bjarne Stroustrup. The purpose of the
// drill is to practice using variables, inputs, and if statements
// in order to produce as simple form letter.

#include "std_lib_facilities.h"

int main () {
    cout << "Enter the name of the person you want to write to:\n";
    string first_name; // first name is a variable of type string
    cin >> first_name; // Read characters into first_name
    cout << "Enter the name of another friend:\n";
    string friend_name;
    cin >> friend_name;
    char friend_sex {0};
    cout << "Enter 'm' if the friend is male or 'f' if female:\n";
    cin >> friend_sex;
    int age {0};
    cout << "Enter the age of the recipient in years:\n";
    cin >> age;
    
    cout << "Dear, " << first_name << ",\n";
    cout << "How are you? I am fine. I miss you. Add a few more lines.\n";
    cout << "Have you seen " << friend_name << " lately? ";
    if (friend_sex == 'm') {
        cout << "If you see " << friend_name << " ask him to call me.\n";
    }

    if (friend_sex == 'f') {
        cout << "If you see " << friend_name << " ask her to call me.\n";    
    }

    if (age <= 0 || age >= 110) {
        simple_error("You're Kidding!");
    }

    if (age < 12) {
        cout << "Next year you will be " << age + 1 << " \n";
    }

    if (age > 70) {
        cout << "I hope you are enjoying retirement.\n";
    }

    if (age == 17) {
        cout << "Next year you will be able to vote.\n";
    }

    cout << "Yours sincerely, \n\n\nFrank E. Ciszek\n";

    return 0;
}