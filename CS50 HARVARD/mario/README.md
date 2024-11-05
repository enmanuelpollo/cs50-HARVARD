# Pyramid Printing Program

This program prompts the user to input a height and then prints a double pyramid (two halves) of hashes (`#`) in a specified format. The user can specify the height of the pyramid, and the program will validate this input to ensure it falls within the specified range.

## Table of Contents

- [Introduction](#introduction)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Example](#example)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## Introduction

The Pyramid Printing Program is a simple C application that allows users to create a visually structured output of a double pyramid. This exercise is designed to help learners understand loops, conditional statements, and basic input/output in C programming.

## Technologies Used

- **C**: The programming language used for this implementation.
- **CS50 Library**: Used for handling user input in a simple manner.

## Installation

To compile and run the program, ensure you have the CS50 library installed. You can compile the program using `clang` as follows:

bash
clang -o pyramid pyramid.c -lcs50
Replace pyramid.c with the name of your source file.

Usage
To use the program, run the following command in your terminal:

bash

./pyramid
The program will prompt you to enter the height of the pyramid. After input, it will generate and display the double pyramid based on the specified height.

Features
User Input: Prompts for a height between 1 and 8.
Input Validation: Ensures that the user provides a valid height within the specified range.
Double Pyramid Structure: Displays two halves of the pyramid separated by two spaces.
Example
Here’s an example of how the program works:

plaintext

Enter height here: 4
   #  #
  ##  ##
 ###  ###
####  ####
In this example, the user inputs a height of 4, and the program outputs a double pyramid of hashes.

License
This project is licensed under the MIT License. For details, see the LICENSE file in the project directory.

Acknowledgments
CS50 - Harvard's Introduction to Computer Science course, which inspired and guided this project.

The creators of the CS50 library for providing helpful tools in C programming.
Special thanks to online resources and communities that helped enhance understanding of algorithms and C programming techniques.
