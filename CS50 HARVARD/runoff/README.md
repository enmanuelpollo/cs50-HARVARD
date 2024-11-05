# Runoff Voting System

This project implements a runoff voting system that allows multiple candidates and voters. Voters can rank candidates, and the program conducts rounds of voting until a candidate wins or a tie occurs. The system ensures that the voting process adheres to fair principles, eliminating candidates with the least votes in successive rounds as needed.

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

The Runoff Voting System allows voters to rank candidates based on their preferences. If no candidate receives a majority of votes, the candidate with the fewest votes is eliminated, and the votes are redistributed until a winner is determined or a tie occurs. This program aims to provide a clear, democratic process for electing a candidate.

## Technologies Used

- **C**: The programming language used for this implementation.
- **CS50 Library**: For handling user input and output.

## Installation

To compile and run the program, ensure you have the CS50 library installed. You can compile the program using `clang` as follows:

bash
clang -o runoff runoff.c -lcs50
Replace runoff.c with the name of your source file.

Usage
To use the program, run the following command in your terminal:

bash

./runoff [candidate ...]
Replace [candidate ...] with the names of the candidates participating in the election.
The program will prompt for the number of voters and their rankings of the candidates.
Example
bash

./runoff Alice Bob Charlie
Number of voters: 3
Rank 1: Alice
Rank 2: Bob
Rank 1: Bob
Rank 2: Charlie
Rank 1: Charlie
Rank 2: Alice
In this example, three candidates (Alice, Bob, Charlie) are running, and three voters are casting their votes by ranking the candidates.

Features
Ranked Voting: Allows voters to rank candidates in order of preference.

Elimination Rounds: Automatically eliminates the candidate with the fewest votes and redistributes votes until a winner is found.

Tie Handling: Determines if a tie occurs among remaining candidates and declares them as winners.

Functionality
Voting: Each voter can rank candidates. The program validates the input and ensures that only valid votes are counted.

Tabulation: The program counts the votes for each candidate based on the rankings provided by the voters.

Winner Declaration: If a candidate receives more than half of the votes, they are declared the winner.

Elimination Process: If no winner is found, the candidate with the least votes is eliminated, and the process repeats until a winner emerges or a tie occurs.

License
This project is licensed under the MIT License. For details, see the LICENSE file in the project directory.

Acknowledgments
CS50 - Harvard's Introduction to Computer Science course, which inspired and guided this project.

The creators of the CS50 library for providing helpful tools in C programming.
Special thanks to online resources and communities that helped enhance understanding of algorithms and C programming techniques.
