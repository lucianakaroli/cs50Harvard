#include <cs50.h>
#include <stdio.h>

int get_start_size();
int get_end_size();

int main(void)
{
    int start_size = get_start_size();

    while (start_size <= 0)
    {
        start_size = get_start_size();
    }


    int end_size = get_end_size();

    while(end_size < start_size)
    {
        end_size = get_end_size();
    }


    int years = 0;
    while (start_size < end_size)
    {
        start_size = start_size + (start_size / 3) - (start_size /4);
        years++;
    }
    printf("Years: %d\n", years);
    

}



int get_start_size()
{
    return get_int("Start size: ");
}

int get_end_size()
{
    return get_int("End size: ");
}
