#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get pyramid height from user, make sure it's between 1 and 8.
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // Print right aligned pyramid with height of n

    // i determines number of rows
    int i;
    for (i = 0; i < n; i++)
    {
        // j determines the number of columns
        int j;
        for (j = 0; j < n; j++)
        {
            // Checks position and determines whether to print a space or #
            if (i + j < n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        // Prints a new line after each row
        printf("\n");
    }
}
