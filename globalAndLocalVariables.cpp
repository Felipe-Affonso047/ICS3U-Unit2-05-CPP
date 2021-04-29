// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: April 2021
// This program calculates the circumference of a circle

#include <iostream>
#include <cmath>
#include <iomanip>

//  This program shows how the global and local variable works
int variableX = 25;


void localVariable() {
    // shows what happenens with local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: "
              << variableX << "+" << variableY << "=" << variableZ << std::endl;
}


void globalVariable() {
    // shows what happens with global variables

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: "
              << variableX << "+" << variableY << "=" << variableZ << std::endl;
}


int main() {
    // shows how the global and local variable works

    localVariable();
    globalVariable();
}
