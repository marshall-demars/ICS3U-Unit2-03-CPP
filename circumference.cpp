// Copyright (c) 2022 Marshall Demars All rights reserved
//
// Created by: Marshall Demars
// Created on: Sept 2022
// This program calculates circumference of a circle with user input

#include <cmath>
#include <iostream>

int main() {
    // this function calculates circumference of a circle
    const double TAU = 6.28;
    int radiusOfCircle;
    double circumferenceOfCircle;

    // input
    std::cout << "Enter radius of the circle (mm): ";
    std::cin >> radiusOfCircle;

    // process
    circumferenceOfCircle = TAU * radiusOfCircle;

    // output
    std::cout << "\nCircumference is " << circumferenceOfCircle << " mm."
        << std::endl;

    std::cout << "\nDone." << std::endl;
}
