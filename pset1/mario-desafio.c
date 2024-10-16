#include <cs50.h>
#include <stdio.h>

int get_height();

int main(void)
{
    int height = get_height();
    while (height < 1 || height > 8)
    {
        height = get_height();
    }

    int counter = 1;
    while(counter <= height)
    {
        int spaces = height - counter;
        int hashtag = height - spaces;

        for (int i = 0; i < spaces; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < counter; i++)
        {
            printf("#");
        }
        printf(" ");

        for(int i = 0; i < hashtag; i++)
        {
            printf("#");
        }

        printf("\n");
        counter++;
    }
}

int get_height()
{
    return get_int("Height: ");
}
