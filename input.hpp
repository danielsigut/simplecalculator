//
//  input.hpp
//  calculator
//
//  Created by Admin on 11/25/17.
//  Copyright © 2017 Admin. All rights reserved.
//

#ifndef input_hpp
#define input_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class input {
public:
    input();
    string pickMethod();
    float x;
    float y;
    void getNums();
    string choice;
private:
    string addition = "add";
    string subtraction = "subtract";
    string multiplication = "multiply";
    string division = "divide";
    friend class calculator;
};

#endif /* input_hpp */
