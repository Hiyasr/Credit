#include <cs50.h>
#include <stdio.h>

bool luhn_algorithm(long number);
string card_type(long number);

int main(void)
{
    // Prompt user for credit card number
    long number = get_long("Number: ");
    
    // Check if the card is valid using Luhn's algorithm
    if (!luhn_algorithm(number))
    {
        printf("INVALID\n");
        return 0;
    }
    
    // Determine the card type
    string type = card_type(number);
    
    // Print the card type
    printf("%s\n", type);
}

// Luhn's Algorithm to validate the credit card number
bool luhn_algorithm(long number)
{
    int sum = 0;
    bool alternate = false;
    
    while (number > 0)
    {
        int digit = number % 10;
        if (alternate)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit = digit % 10 + digit / 10;
            }
        }
        sum += digit;
        number /= 10;
        alternate = !alternate;
    }
    
    return sum % 10 == 0;
}

// Determine the type of the credit card
string card_type(long number)
{
    int digits = 0;
    long start_digits = number;
    
    while (start_digits > 99)
    {
        start_digits /= 10;
    }
    
    // Count the total number of digits
    long temp = number;
    while (temp > 0)
    {
        temp /= 10;
        digits++;
    }
    
    // Determine card type based on starting digits and length
    if ((start_digits == 34 || start_digits == 37) && digits == 15)
    {
        return "AMEX";
    }
    else if (start_digits >= 51 && start_digits <= 55 && digits == 16)
    {
        return "MASTERCARD";
    }
    else if ((start_digits / 10 == 4) && (digits == 13 || digits == 16))
    {
        return "VISA";
    }
    else
    {
        return "INVALID";
    }
}
