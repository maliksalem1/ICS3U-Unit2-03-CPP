// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Sept 2022
// This program calculates the circumference of a circle
// with user input

#include <iostream>

int main() {
    // this function calculates circumference of a circle
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter radius of the circle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU * radius;

    // output
    std::cout << "Circumference is " << circumference << " mm" << std::endl;
    std::cout << "\nDone." << std::endl;
}
