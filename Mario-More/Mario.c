#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int height = 0;
    do
    {
        height = get_int("What is the height?");
    }
    while (height < 1);
    for (int i = 1; i <= height; i++)
    {
        int a = height - i;
        for (int space = 1; space <= a; space++)
        {
            printf(" ");
        }

        for (int hashs = 0; hashs < i; hashs++)
        {
            printf("#");
        }

        printf("  ");

        for (int hash2 = 0; hash2 < i; hash2++)
        {
            printf("#");
        }
        printf("\n");
    }
}
