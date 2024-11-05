#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Check if the correct number of command-line arguments is provided
    if (argc != 2)
    {
        printf("Usage: ./cesar key\n"); // Print usage message if argument count is incorrect
        return 1; // Exit the program with an error code
    }

    // Define the key as the second command-line argument
    string key = argv[1];

    // Check that each character in the key is a digit
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i])) // If the character is not a digit
        {
            printf("Usage: ./cesar key\n"); // Print usage message
            return 1; // Exit the program with an error code
        }
    }

    // Get plaintext input from the user
    string plaintext = get_string("plaintext: ");

    // Convert the key from a string to an integer
    int k = atoi(key);
    printf("ciphertext: "); // Prepare to output the ciphertext

    // Loop through each character of the plaintext to generate the ciphertext
    for (int i = 0; i < strlen(plaintext); i++)
    {
        // Check if the character is an uppercase letter
        if (isupper(plaintext[i]))
        {
            // Calculate the new character by shifting, wrapping around the alphabet
            printf("%c", (((plaintext[i] - 65) + k) % 26) + 65);
        }
        // Check if the character is a lowercase letter
        else if (islower(plaintext[i]))
        {
            // Calculate the new character by shifting, wrapping around the alphabet
            printf("%c", (((plaintext[i] - 97) + k) % 26) + 97);
        }
        else
        {
            // If it's not an alphabetic character, print it unchanged
            printf("%c", plaintext[i]);
        }
    }
    printf("\n"); // Print a newline after the ciphertext
}

