#include <cs50.h>
#include <stdio.h>

// Declare function
int get_height();

// Execute program
int main(void)
{
    int height = get_height();
    // Verify if height is less than 1 and greater than 8
    while (height < 1 || height > 8)
    {
        // If is < 1 and > 8, continue calling a valid number
        height = get_height();
    }
    // Start the counter
    int counter = 1;
    while (counter <= height)
    {
        int spaces = height - counter;
        for (int i = 0; i < spaces; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < counter; i++)
        {
            printf("#");
        }
        printf("\n");
        counter++;
    }
}

// Define function
int get_height()
{
    return get_int("Height: ");
}
