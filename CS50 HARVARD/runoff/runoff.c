#include <cs50.h> // Include the CS50 library for handling user input
#include <stdbool.h> // Include for boolean type support
#include <stdio.h> // Include standard input-output library
#include <string.h> // Include for string manipulation functions

// Define maximum number of voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// Array to store preferences of voters for candidates
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Define a struct to represent a candidate
typedef struct
{
    string name;       // Name of the candidate
    int votes;        // Number of votes received
    bool eliminated;  // Indicates if the candidate has been eliminated
} candidate;

// Array to hold candidates
candidate candidates[MAX_CANDIDATES];

// Global variables to keep track of voter and candidate counts
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check if at least one candidate is provided
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Set the number of candidates based on command-line arguments
    candidate_count = argc - 1;

    // Check for maximum candidate limit
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }

    // Initialize candidates from command-line arguments
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1]; // Set candidate name
        candidates[i].votes = 0;            // Initialize votes to zero
        candidates[i].eliminated = false;   // Initialize eliminated status to false
    }

    // Get the number of voters
    voter_count = get_int("Number of voters: ");
    
    // Check for maximum voter limit
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Collect each voter's rankings for candidates
    for (int i = 0; i < voter_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1); // Prompt for candidate ranking
            if (!vote(i, j, name)) // Validate the vote
            {
                printf("Invalid vote.\n");
                return 4; // Exit if the vote is invalid
            }
        }
        printf("\n"); // Print a newline for better readability
    }

    // Run the voting process until a winner is found or a tie occurs
    while (true)
    {
        tabulate(); // Count the votes based on current preferences
        bool won = print_winner(); // Check if there's a winner
        if (won)
        {
            break; // Exit if a winner is found
        }

        // Find the minimum number of votes among candidates
        int min = find_min();
        bool tie = is_tie(min); // Check if there's a tie
        
        if (tie)
        {
            // Print names of candidates if there's a tie
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break; // Exit the loop on tie
        }
        
        // Eliminate the candidate(s) with the minimum votes
        eliminate(min);
        
        // Reset votes for the next round
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0; // Reset the votes to zero
        }
    }
    return 0; // Exit the program
}

// Function to process a vote for a candidate
bool vote(int voter, int rank, string name)
{
    // Check if the name matches any candidate
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(candidates[i].name, name) == 0) // Compare names
        {
            preferences[voter][rank] = i; // Record the preference for the voter
            return true; // Return true for a valid vote
        }
    }
    return false; // Return false for an invalid vote
}

// Function to count votes for remaining candidates
void tabulate(void)
{
    // Iterate through each voter
    for (int i = 0; i < voter_count; i++)
    {
        // Check the preferences for each candidate
        for (int j = 0; j < candidate_count; j++)
        {
            if (!candidates[preferences[i][j]].eliminated) // Count only non-eliminated candidates
            {
                candidates[preferences[i][j]].votes++; // Increment the vote count for the candidate
                break; // Break to move to the next voter
            }
        }
    }
}

// Function to check if there's a winner
bool print_winner(void)
{
    // Iterate through candidates to find a winner
    for (int i = 0; i < candidate_count; i++)
    {
        // Check if the candidate has more than half of the votes
        if (candidates[i].votes > voter_count / 2)
        {
            printf("%s\n", candidates[i].name); // Print the winner's name
            return true; // Return true indicating a winner was found
        }
    }
    return false; // Return false if no winner
}

// Function to find the minimum number of votes among candidates
int find_min(void)
{
    int min = voter_count; // Start with maximum possible votes
    // Iterate through candidates to find the minimum
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes < min && !candidates[i].eliminated) // Check non-eliminated candidates
        {
            min = candidates[i].votes; // Update minimum votes
        }
    }
    return min; // Return the minimum vote count
}

// Function to check if there's a tie at the minimum vote count
bool is_tie(int min)
{
    int eliminate = 0; // Count of non-eliminated candidates
    int counter = 0; // Count of candidates with minimum votes

    // Iterate through candidates
    for (int i = 0; i < candidate_count; i++)
    {
        if (!candidates[i].eliminated) // Count non-eliminated candidates
        {
            eliminate++;
        }
        if (candidates[i].votes == min) // Check if candidate has minimum votes
        {
            counter++; // Increment counter for tie
        }
    }
    // Return true if the number of candidates with minimum votes equals the number of non-eliminated candidates
    return eliminate == counter;
}

// Function to eliminate candidates with the minimum votes
void eliminate(int min)
{
    // Iterate through candidates
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == min) // Check if candidate has minimum votes
        {
            candidates[i].eliminated = true; // Mark candidate as eliminated
        }
    }
}

