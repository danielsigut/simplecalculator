//
//  calculator.hpp
//  calculator
//
//  Created by Admin on 11/26/17.
//  Copyright © 2017 Admin. All rights reserved.
//

#ifndef calculator_hpp
#define calculator_hpp

#include <stdio.h>
#include <iostream>
#include "input.hpp"


using namespace std;

class calculator : public input {
public:
    calculator();
    void add();
    void subtract();
    void multiply();
    void divide();
    void checkChoice();
private:
    float sum;
    float quotient;
    float product;
    float difference;
};

#endif /* calculator_hpp */
