#include <cs50.h>
#include <stdio.h> // Include standard input/output library

// Function prototypes
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25; // Update cents after giving quarters

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10; // Update cents after giving dimes

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5; // Update cents after giving nickels

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1; // Update cents after giving pennies

    // Sum total coins given to the customer
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

// Function to get a non-negative amount of cents from the user
int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Cents Owed: "); // Prompt user for input
    }
    while (cents < 0); // Repeat until a non-negative value is entered
    return cents; // Return the valid amount of cents
}

// Function to calculate the number of quarters
int calculate_quarters(int cents)
{
    int quarters = 0; // Initialize the number of quarters to zero
    while (cents >= 25) // While there are at least 25 cents remaining
    {
        cents = cents - 25; // Deduct 25 cents
        quarters++; // Increment the count of quarters
    }
    return quarters; // Return the total number of quarters
}

// Function to calculate the number of dimes
int calculate_dimes(int cents)
{
    int dimes = 0; // Initialize the number of dimes to zero
    while (cents >= 10) // While there are at least 10 cents remaining
    {
        cents = cents - 10; // Deduct 10 cents
        dimes++; // Increment the count of dimes
    }
    return dimes; // Return the total number of dimes
}

// Function to calculate the number of nickels
int calculate_nickels(int cents)
{
    int nickles = 0; // Initialize the number of nickels to zero
    while (cents >= 5) // While there are at least 5 cents remaining
    {
        cents = cents - 5; // Deduct 5 cents
        nickles++; // Increment the count of nickels
    }
    return nickles; // Return the total number of nickels
}

// Function to calculate the number of pennies
int calculate_pennies(int cents)
{
    int pennies = 0; // Initialize the number of pennies to zero
    while (cents >= 1) // While there is at least 1 cent remaining
    {
        cents = cents - 1; // Deduct 1 cent
        pennies++; // Increment the count of pennies
    }
    return pennies; // Return the total number of pennies
}

