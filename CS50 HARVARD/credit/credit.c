#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long card_number;
    int sum = 0;
    int digit_count = 0;
    int first_digit = 0;
    int second_digit = 0;

    card_number = get_long_long("Number: ");

    // Step 1: Calculate sum of every other digit starting from second-to-last digit
    // Step 2: Add sum of digits that weren't multiplied by 2 to the sum from Step 1
    // Step 3: Check if last digit of sum is 0 to determine if card number is valid

    while (card_number > 0)
    {
        int digit = card_number % 10;
        card_number /= 10;
        digit_count++;

        if (digit_count % 2 == 0)
        {
            int product = digit * 2;
            sum += product / 10;
            sum += product % 10;
        }
        else
        {
            sum += digit;
        }

        if (card_number == 4 && digit_count == 1)
        {
            printf("VISA\n");
            return 0;
        }
        else if (card_number == 34 || card_number == 37)
        {
            if (digit_count == 13)
            {
                printf("AMEX\n");
                return 0;
            }
        }
        else if (card_number >= 51 && card_number <= 55)
        {
            if (digit_count == 16)
            {
                printf("MASTERCARD\n");
                return 0;
            }
        }

        // save the first and second digits
        second_digit = first_digit;
        first_digit = digit;
    }

    // check if the sum is valid and print the result
    if (sum % 10 == 0)
    {
        if (first_digit == 4 && (digit_count == 13 || digit_count == 16))
        {
            printf("VISA\n");
        }
        else if (first_digit == 3 && digit_count == 15 && (second_digit == 4 || second_digit == 7))
        {
            printf("AMEX\n");
        }
        else if (first_digit == 5 && digit_count == 16 && second_digit >= 1 && second_digit <= 5)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}

