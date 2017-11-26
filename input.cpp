//
//  input.cpp
//  calculator
//
//  Created by Admin on 11/25/17.
//  Copyright © 2017 Admin. All rights reserved.
//

#include "input.hpp"
#include "calculator.hpp"
#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

string pickMethod();
void getNums();

// get the numbers from the user immediately
input::input() {
    getNums();
    pickMethod();
};

// get the user to pick between adding, subtracting, multiplying, or dividing the numbers
string input::pickMethod() {
      cout << "What would you like to do with these numbers?" << endl;
      cout << "You can type 'add', 'subtract', 'multiply', or 'divide'." << endl;
      cin >> choice;
      return choice;
}

// get the numbers from the user
void input::getNums() {
    cout << "What's the first number?" << endl;
    cin >> x;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please type a number for x." << endl;
        cin >> x;
    }
    cout << "What's the second number?" << endl;
    cin >> y;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please type a number for y." << endl;
        cin >> y;
    }
    
    cout << "You chose " << x << " and " << y << "."  << endl;
}
