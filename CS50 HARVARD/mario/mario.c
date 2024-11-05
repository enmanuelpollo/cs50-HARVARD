#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, row, column, space; // Declare variables for height, row, column, and space
    do // Loop to ensure valid height input
    {
        height = get_int("Enter height here: "); // Ask the user for the pyramid height
    }
    while (height < 1 || height > 8); // Continue prompting until height is between 1 and 8

    // Outer loop for each row of the pyramid
    for (row = 0; row < height; row++)
    {
        // Inner loop to print leading spaces for left half of the pyramid
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" "); // Print a space for each leading space needed
        }

        // Inner loop to print the left half of the pyramid
        for (column = 0; column <= row; column++)
        {
            printf("#"); // Print a '#' for the current column
        }

        printf("  "); // Print two spaces between the two halves of the pyramid

        // Inner loop to print the right half of the pyramid
        for (column = 0; column <= row; column++)
        {
            printf("#"); // Print a '#' for the current column
        }

        printf("\n"); // Move to the next line after finishing a row
    }
}

