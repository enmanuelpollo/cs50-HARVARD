# Caesar Cipher

The Caesar Cipher program implements a simple encryption algorithm that shifts each letter in the plaintext by a fixed number of positions in the alphabet. This program allows users to encrypt their messages using a key that specifies the number of positions to shift.

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

The Caesar Cipher is one of the oldest and simplest encryption techniques. This program enables users to convert plaintext into ciphertext by applying a specified shift (key) to each letter. Non-alphabetical characters remain unchanged.

## Technologies Used

- **C**: The programming language used for this implementation.
- **CS50 Library**: For handling user input and output.

## Installation

To compile and run the program, ensure you have the CS50 library installed. You can compile the program using `clang` as follows:

bash
clang -o caesar caesar.c -lcs50
Replace caesar.c with the name of your source file.

Usage
To use the program, run the following command in your terminal, providing a numerical key as a command-line argument:

bash

./caesar key
The program will prompt you to enter the plaintext to be encrypted. After input, it will display the ciphertext.

Features
Input Validation: Ensures that the key provided is a numeric value.
Shifted Encryption: Each letter in the plaintext is shifted according to the key while preserving case.
Non-alphabetical Character Handling: Non-alphabet characters are output unchanged.
Example
Here’s an example of how the program works:

bash

$ ./caesar 3
plaintext: HELLO
ciphertext: KHOOR
In this example, the user enters the plaintext "HELLO" with a key of 3. The program outputs the ciphertext "KHOOR".

Functionality
The program works as follows:

It checks for the correct number of command-line arguments and verifies that the key is numeric.
It prompts the user for plaintext input.
It converts the key from a string to an integer.
It loops through each character of the plaintext:
If the character is uppercase, it shifts it by the key, wrapping around the alphabet if necessary.
If the character is lowercase, it shifts it similarly.
Non-alphabetical characters are printed unchanged.
It outputs the resulting ciphertext.

License
This project is licensed under the MIT License. For details, see the LICENSE file in the project directory.

Acknowledgments
CS50 - Harvard's Introduction to Computer Science course, which inspired and guided this project.
The creators of the CS50 library for providing helpful tools in C programming.
Special thanks to online resources and communities that helped enhance understanding of algorithms and C programming techniques.
