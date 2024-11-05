# Credit Card Validator

This program validates credit card numbers using the Luhn algorithm and identifies the type of card based on the number's prefix and length. It supports the major credit card providers: VISA, American Express (AMEX), and MasterCard.

## Table of Contents

- [Introduction](#introduction)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Usage](#usage)
- [Functionality](#functionality)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## Introduction

The Credit Card Validator is a command-line application that checks the validity of credit card numbers based on the Luhn algorithm. It reads a credit card number from the user, processes it, and then displays the card type or indicates if the number is invalid. 

## Technologies Used

- **C**: The programming language used for this implementation.
- **CS50 Library**: For handling user input.

## Installation

To compile and run the program, ensure you have the CS50 library installed. You can compile the program using `clang` as follows:

bash
clang -o credit_card_validator credit_card_validator.c -lcs50
Replace credit_card_validator.c with the name of your source file.

Usage
To use the program, run the following command in your terminal:

bash

./credit_card_validator
The program will prompt you to enter a credit card number. After input, it will validate the number and print the card type or indicate if the card number is invalid.

Functionality
Input Handling: The program prompts the user to enter a credit card number.
Luhn Algorithm Implementation: It calculates the checksum to verify the card number's validity.
Card Type Detection:
VISA: Starts with a 4 and is either 13 or 16 digits long.
AMEX: Starts with 34 or 37 and is 15 digits long.
MasterCard: Starts with numbers from 51 to 55 and is 16 digits long.
Output: The program outputs the card type or indicates that the card number is invalid.
Example
Here’s an example of how the program works:

bash

Number: 4111111111111111
VISA
In this example, the user inputs a valid VISA card number, and the program correctly identifies and outputs the card type.

License
This project is licensed under the MIT License. For details, see the LICENSE file in the project directory.

Acknowledgments
CS50 - Harvard's Introduction to Computer Science course, which inspired and guided this project.
The creators of the CS50 library for providing helpful tools in C programming.
Special thanks to online resources and communities that helped enhance understanding of algorithms and C programming techniques.
