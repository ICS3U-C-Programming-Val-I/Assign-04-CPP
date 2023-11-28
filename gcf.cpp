// Copyright (c) 2023 Val I All rights reserved.
//
// Created by: Val
// Created on: Nov 25, 2023
// This program asks the user to enter two or three numbers,
// it then tells them the greatest common factor.
#include <iostream>
#include <string>

int main() {
    // initializing variables: counter numAmount, gcf
    int counter = 1;
    std::string numAmount;
    int gcf;

    // Initial Greeting.
    std::cout << "Hello and welcome to my program.\n";
    std::cout << "In a second, you will be asked to input numbers,\n";
    std::cout << "and I'll tell you the greatest common factor.\n";
    std::cout << "Before we begin, how many numbers would you like the GCF of, 2 or 3?\n";

    // Uses loop to get the amount of numbers from the user.
    while (numAmount != "2" && numAmount != "3") {
        std::cout << " ";
        std::cin >> numAmount;
        if (numAmount != "2" && numAmount != "3") {
            std::cout << "Please enter 2 or 3!\n";
        }
    }

    // Initializing variables of numbers as string.
    std::string numStr1, numStr2, numStr3;

    // Gets numbers as strings from the user.
    std::cout << "Enter the first number: ";
    std::cin >> numStr1;

    try {
        int(numInt1) = std::stoi(numStr1);

        std::cout << "Enter the second number: ";
        std::cin >> numStr2;

        try {
            int(numInt2) = std::stoi(numStr2);

            // Extra functionality - GCF of 3 numbers if wanted.
            if (numAmount == "3") {
                std::cout << "Enter the third number: ";
                std::cin >> numStr3;

                try {
                    int(numInt3) = std::stoi(numStr3);

                    // Uses loop to calculate the greatest common factor.
                    while (counter <= numInt1 && counter <= numInt2 && counter <= numInt3) {
                        if (numInt1 % counter == 0 && numInt2 % counter == 0 && numInt3 % counter == 0) {
                            gcf = counter;
                        }
                        counter++;
                    }

                    // Displays the greatest common factor.
                    std::cout << "The greatest common factor is " << gcf << ".\n";
                } catch (std::invalid_argument) {
                    std::cout << numStr3 << " is not an integer.\n";
                }
            } else {
                // Uses loop to calculate the greatest common factor.
                while (counter <= numInt1 && counter <= numInt2) {
                    if (numInt1 % counter == 0 && numInt2 % counter == 0) {
                        gcf = counter;
                    }
                    counter++;
                }

                // Displays the greatest common factor.
                std::cout << "The greatest common factor is " << gcf << ".\n";
            }
        } catch (std::invalid_argument) {
            std::cout << numStr2 << " is not an integer.\n";
        }
    } catch (std::invalid_argument) {
        std::cout << numStr1 << " is not an integer.\n";
    }
}
