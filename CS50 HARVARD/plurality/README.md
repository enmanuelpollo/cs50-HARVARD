# Plurality Voting System

This is a simple command-line program for a plurality voting system, where voters can vote for their preferred candidates, and the candidate with the most votes wins. It is part of the CS50 course and demonstrates fundamental programming concepts in C.

## Table of Contents

- [Introduction](#introduction)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## Introduction

The plurality voting system allows multiple candidates to participate in an election. Each voter can cast a single vote for their preferred candidate. The candidate with the highest number of votes at the end of the election is declared the winner.

## Technologies Used

- C programming language
- CS50 library for handling input and output

## Installation

1. Make sure you have a C compiler installed (e.g., `gcc`).
2. Clone this repository to your local machine:
 
bash
   git clone https://github.com/yourusername/plurality-voting.git
Navigate to the project directory:
bash

cd plurality-voting

Compile the program using the following command:

bash

make plurality
Usage
Run the program with the names of candidates as command-line arguments:
bash

./plurality Alice Bob Charlie

The program will prompt you to enter the number of voters:

bash
Number of voters: 3

Each voter will be prompted to cast their vote:

bash

Vote: Alice
Vote: Bob
Vote: Alice
After all votes are cast, the program will display the winner(s):
bash
Alice

Features
Accepts a variable number of candidates (up to a maximum of 9).

Allows each voter to cast a single vote for a candidate.

Validates votes to ensure they correspond to the candidates.

Displays the winner(s) based on the highest vote count.

Handles ties by displaying all candidates with the maximum votes.

License
This project is licensed under the MIT License. See the LICENSE file for more information.

Acknowledgments
This program was developed as part of the CS50 course offered by Harvard University. Special thanks to the CS50 staff and community for their support and resources.
