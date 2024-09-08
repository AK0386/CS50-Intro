#include <cs50.h>
#include <stdio.h>
#include <string.h>

int score(string s);

int main(void)
{
    // input words
    string Player1 = get_string("Player1: ");
    string Player2 = get_string("Player2: ");
    // check sum using list of numbers
    int a = score(Player1);
    int b = score(Player2);
    // which person one
    if (a > b)
    {
        printf("Player 1 wins!");
    }
    else if (a < b)
    {
        printf("Player 2 wins!");
    }
    else
    {
        printf("Tie!");
    }
    printf("\n");
}

int score(string s)
{
    int sum = 0;
    int num = 0;
    int array[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    for (int i = 0, x = strlen(s); i < x; i++)
    {
        if ((int) s[i] < 124 && (int) s[i] > 96)
        {
            num = (int) s[i] - 97;
            sum += array[num];
        }
        else if ((int) s[i] < 92 && (int) s[i] > 64)
        {
            num = (int) s[i] - 65;
            sum += array[num];
        }
    }
    return sum;
}
