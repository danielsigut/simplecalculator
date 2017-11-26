//
//  calculator.cpp
//  calculator
//
//  Created by Admin on 11/26/17.
//  Copyright © 2017 Admin. All rights reserved.
//

#include "calculator.hpp"
#include "input.hpp"
#include <iostream>

using namespace std;

void add();
void subtract();
void multiply();
void divide();
void checkChoice();

calculator::calculator() {
    checkChoice();
};

void calculator::add() {
    sum = x + y;
    cout << "The sum of " << x << " and " << y << " is " << sum << "." << endl;
};

void calculator::subtract() {
    difference = x - y;
    cout << "The difference of " << x << " and " << y << " is " << difference << "." << endl;
};

void calculator::multiply() {
    product = x * y;
    cout << "The product of " << x << " and " << y << " is " << product << "." << endl;
};

void calculator::divide() {
    quotient = x / y;
    cout << "The quotient of " << x << " and " << y << " is " << quotient << "." << endl;
};

void calculator::checkChoice() {
    if (choice == addition) {
        add();
    }
    else if (choice == subtraction) {
        subtract();
    }
    else if (choice == multiplication) {
        multiply();
    }
    else if (choice == division) {
        divide();
    }
    else {
        cout << "Please type one of the choices." << endl;
        pickMethod();
        checkChoice();
    }
};
