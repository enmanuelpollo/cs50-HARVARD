/*
https://cs50.harvard.edu/x/2022/labs/2/
*/

#include <cs50.h>    // Include the CS50 library for input functions
#include <ctype.h>   // Include for character type functions (isupper, islower)
#include <stdio.h>   // Include standard input-output library
#include <string.h>  // Include for string manipulation functions

// Points assigned to each letter of the alphabet (indexed by letter's position)
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Function prototype for computing score
int compute_score(string word);

int main(void)
{
    // Prompt player 1 for input word
    string word1 = get_string("Player 1: ");
    // Prompt player 2 for input word
    string word2 = get_string("Player 2: ");

    // Calculate scores for both words using compute_score function
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Determine and print the winner based on the scores
    if (score1 > score2)
    {
        printf("Player 1 wins!\n"); // Player 1 has a higher score
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n"); // Player 2 has a higher score
    }
    else
    {
        printf("Tie!\n"); // Both players have the same score
    }
}

// Function to compute the score of a given word
int compute_score(string word)
{
    // Initialize score to zero
    int score = 0;

    // Loop through each character in the word to calculate the score
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        // Check if the character is an uppercase letter
        if (isupper(word[i]))
        {
            // Add the corresponding points for the uppercase letter
            score += POINTS[word[i] - 'A']; // 'A' is 0, 'B' is 1, ..., 'Z' is 25
        }
        // Check if the character is a lowercase letter
        else if (islower(word[i]))
        {
            // Add the corresponding points for the lowercase letter
            score += POINTS[word[i] - 'a']; // 'a' is 0, 'b' is 1, ..., 'z' is 25
        }
        // Non-alphabetic characters are ignored (no points added)
    }

    // Return the final computed score for the word
    return score;
}

