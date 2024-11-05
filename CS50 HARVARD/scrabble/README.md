# Scrabble Score Calculator

This project is a simple Scrabble score calculator that allows two players to enter their words and calculates their scores based on the letters used. The player with the highest score wins the game.

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

The Scrabble Score Calculator is designed to evaluate the scores of two players based on their word inputs. Each letter has a specific point value, and the program computes the total score for each player's word. The player with the higher score is declared the winner.

## Technologies Used

- **C**: The programming language used for this implementation.
- **CS50 Library**: For handling user input and output.

## Installation

To compile and run the program, ensure you have the CS50 library installed. You can compile the program using `clang` as follows:

bash
clang -o scrabble_score scrabble_score.c -lcs50
Replace scrabble_score.c with the name of your source file.

Usage
To use the program, run the following command in your terminal:

bash

./scrabble_score
The program will prompt both players to enter their words. After input, it will calculate and display the scores for both players and announce the winner.

Features
Score Calculation: Calculates scores based on the letters in each word, adhering to Scrabble scoring rules.
User-Friendly Interface: Prompts players for their words and displays the results clearly.
Tie Handling: Identifies when both players score equally and declares a tie.
Example
Here’s an example of how the program works:

bash

Player 1: HELLO
Player 2: WORLD
Player 1 wins!
In this example, Player 1 enters the word "HELLO," and Player 2 enters "WORLD." The program calculates their scores and determines the winner.

Functionality
The program works as follows:

It prompts each player to enter a word.
It computes the score of each word based on predefined point values for each letter.
It compares the scores of the two players.
It prints the winner or indicates if there is a tie.
The point values for each letter are defined in the POINTS array as follows:

A, E, I, O, U, L, N, S, T, R: 1 point
D, G: 2 points
B, C, M, P: 3 points
F, H, V, W, Y: 4 points
K: 5 points
J, X: 8 points
Q, Z: 10 points
License
This project is licensed under the MIT License. For details, see the LICENSE file in the project directory.

Acknowledgments
CS50 - Harvard's Introduction to Computer Science course, which inspired and guided this project.
The creators of the CS50 library for providing helpful tools in C programming.
Special thanks to online resources and communities that helped enhance understanding of algorithms and C programming techniques.
