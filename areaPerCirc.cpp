// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 09/23/2022
// This program calculates the circumference and area of a circle

#include <cmath>
#include <iostream>

int main() {
    std::cout << "The radius of a circle is 6cm" << std::endl;
    std::cout << "\n";
    std::cout << "The circumference is " << M_PI * pow(6, 2) << " cm\n";
    std::cout << "The area is " << 2*M_PI*6 << " cm^2\n";
}