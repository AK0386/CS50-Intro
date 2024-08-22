#include <cs50.h>
#include <stdio.h>
int change;
int main(void)
{
    int number = 0;
    do
    {
        change = get_int("Change Owed:");
    }
    while (change < 0);

    while (change > 0)
    {
        if (change / 25 > 0)
        {
            int y = change / 25;
            number += y;
            change = change - 25 * y;
        }

        else if (change / 10 > 0)
        {
            int y = change / 10;
            number += y;
            change = change - 10 * y;
        }
        else if (change / 5 > 0)
        {
            int y = change / 5;
            number += y;
            change = change - 5 * y;
        }
        else if (change / 1 >= 0)
        {
            int y = change / 1;
            number += y;
            change = change - y;
        }
    }
    printf("%d\n", number);
}
