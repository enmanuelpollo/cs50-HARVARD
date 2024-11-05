# Coin Change Calculator

This project is a simple coin change calculator that determines the minimum number of coins required to make change for a given amount of cents. The program prompts the user for the amount owed and calculates the number of quarters, dimes, nickels, and pennies needed to provide the correct change.

## Table of Contents

- [Introduction](#introduction)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Example](#example)
- [Functionality](#functionality)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## Introduction

The Coin Change Calculator helps users quickly determine the least amount of coins to give as change. By using the largest denomination coins first (quarters, dimes, nickels, and pennies), the program minimizes the number of coins given. This implementation ensures that the user enters a non-negative amount of cents and calculates the required coins accordingly.

## Technologies Used

- **C**: The programming language used for this implementation.
- **CS50 Library**: For handling user input and output.

## Installation

To compile and run the program, ensure you have the CS50 library installed. You can compile the program using `clang` as follows:

bash
clang -o coin_change coin_change.c -lcs50
Replace coin_change.c with the name of your source file.

Usage
To use the program, run the following command in your terminal:

bash
Copiar código
./coin_change
The program will prompt you to enter the amount of cents owed. Enter a non-negative integer to receive the minimum number of coins needed for change.

Features
User Input Validation: Ensures the user enters a non-negative amount of cents.
Minimization of Coins: Calculates the minimum number of coins needed by prioritizing higher denominations.
Simple and Efficient: Straightforward implementation using loops and conditionals for calculation.
Example
Here’s how the program works:

bash

Cents Owed: 83
5
In this example, the user is owed 83 cents. The program outputs 5, indicating that the minimum number of coins required is 5 (which could be 3 quarters, 1 dime, and 3 pennies).

Functionality
The program functions by breaking down the total cents into the largest denominations first, as follows:

Quarters: Calculates how many 25-cent coins can fit into the total amount.
Dimes: Calculates how many 10-cent coins can fit into the remaining amount.
Nickels: Calculates how many 5-cent coins can fit into the remaining amount.
Pennies: Finally, calculates how many 1-cent coins are needed for the remaining cents.
This greedy algorithm approach ensures the total number of coins is minimized.

License
This project is licensed under the MIT License. For details, see the LICENSE file in the project directory.

Acknowledgments
CS50 - Harvard's Introduction to Computer Science course, which inspired and guided this project.

The creators of the CS50 library for providing helpful tools in C programming.
Special thanks to online resources and communities that helped enhance understanding of algorithms and C programming techniques.
