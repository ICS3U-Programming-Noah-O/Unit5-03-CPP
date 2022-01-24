// Copyright (c) 2022 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Jan. 20, 2022
// This program asks the user for an input level and
// then tells them what their mark range is in percentages

#include <unistd.h>
#include <iostream>
#include <iomanip>


std::string CalcMark(std::string userLevel) {
    // User input cases
    // Returns case to the main function

    if (userLevel == "R" || userLevel == "r") {
        return("0-49%");
    } else if (userLevel == "1-") {
        return("50-52%");
    } else if (userLevel == "1") {
        return("53-56%");
    } else if (userLevel == "1+") {
        return("57-59%");
    } else if (userLevel == "2-") {
        return("60-62%");
    } else if (userLevel == "2") {
        return("63-66%");
    } else if (userLevel == "2+") {
        return("67-69%");
    } else if (userLevel == "3-") {
        return("70-72%");
    } else if (userLevel == "3") {
        return("73-76%");
    } else if (userLevel == "3+") {
        return("77-79%");
    } else if (userLevel == "4-") {
        return("80-85%");
    } else if (userLevel == "4") {
        return("86-90%");
    } else if (userLevel == "4+") {
        return("91-95%");
    } else if (userLevel == "4++") {
        return("96-100%");
    } else {
        return("Enter a valid level input.");
    }
}

int main() {
    // This function gets user input and
    // prints the final range
    // Get user input for level
    std::string level;
    std::string percentage;
    std::cout << "This program converts levels to percentages.\n";
    sleep(1);
    std::cout << "Enter the level that you were given : ";
    std::cin >> level;

    // Call the calculation function and print the percent range
    percentage = CalcMark(level);
    std::cout << " \n";
    std::cout << percentage;
    std::cout << " \n";
}
