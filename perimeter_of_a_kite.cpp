// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This program calculates the perimeter of a kite
//  with user input

#include <iostream>

int main() {
    // this function calculates the perimeter
    int side_a;
    int side_b;
    int perimeter;

    // input
    std::cout << "We will calculate the perimeter of a Kite. " << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the dimension of side A (cm): ";
    std::cin >> side_a;
    std::cout << "Enter the dimension of side B (cm): ";
    std::cin >> side_b;
    std::cout << "" << std::endl;

    // process
    perimeter = 2 * (side_a + side_b);

    // output
    std::cout << "The perimeter is " << (perimeter) << "cm" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done. " << std::endl;
}
