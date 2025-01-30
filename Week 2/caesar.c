#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    // Check that there is only one command line argument which provides key

    // Check that argv[1] is a non negative digit

    // Convert argv[1] from a 'string' to an 'int'

    // Prompt user for a plaintext message

    // Iterate over each letter in plaintext checking for upper and lower case

    // If it's a letter, apply the key value to rotate

    // Print ciphertext

    // Check that user entered 1 argument and that it is a digit
    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert argument to an int
    int k = atoi(argv[1]);

    // Get a string of text and set it to a variable to be changed by a function
    string ptext = get_string("plaintext:  ");

    printf("ciphertext: ");

    // iterate over each character and rotate it by int k and print the result
    for (int i = 0; i < strlen(ptext); i++)
    {
        char ctext = rotate(ptext[i], k);
        printf("%c", ctext);
    }
    printf("\n");

    return 0;
}

// Checks whether a char is upper or lower case and modifies it based on the key and its ASCII
char rotate(char c, int n)
{
    if (isupper(c))
    {
        return 'A' + (c - 'A' + n) % 26;
    }
    else if (islower(c))
    {
        return 'a' + (c - 'a' + n) % 26;
    }
    else
    {
        return c;
    }
}

// Check to see if a string is comprised of digits and return false if not
bool only_digits(string s)
{

    for (int i = 0; i < strlen(s); i++)
    {
        if (!isdigit((unsigned char) s[i]))
        {
            return false;
        }
    }
    return true;
}