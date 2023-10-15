// Copyright 2023 Anastasia Friedenstein Patino
// Created on : October.14, 2023
// Program that calculates the area and perimeter of a pentagon
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    // get length
    double length;
    cout << "Enter Length of a Side: ";
    cin >> length;
    cout << endl;

    // get units
    string units;
    cout << "Enter Units: ";
    cin >> units;
    cout << endl;

    // calculate perimeter
    double perimeter = 5 * length;
    // calculate area
    double area = 1.0 / 4.0 * sqrt(5 * (5 + 2 * sqrt(5)) * pow(length, 2));
    // display P and A with units
    cout << perimeter << " " << units << endl;
    cout << area << " " << units << "^2" << endl;

    return 0;
}
