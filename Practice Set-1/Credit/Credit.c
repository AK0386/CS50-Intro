#include <cs50.h>
#include <math.h>
#include <stdio.h>
int count = 0;

int main(void)
{
    long cnumber;
    int remains;
    int remainscopy;
    int counter = 1;
    int multi = 0;
    int count2 = 0;
    int sum;
    int final;
    int first;
    int second;
    long number;
    do
    {
        number = get_long("Card Number:");
    }
    while (number <= 0);

    cnumber = number;
    while (number > 0)
    {
        count++;
        number = number / 10;
    }
    first = cnumber / pow(10, count - 1);
    second = cnumber / pow(10, count - 2);
    while (cnumber > 0)
    {
        remains = cnumber % 10;
        cnumber = cnumber / 10;

        if (counter % 2 == 0)
        {
            remains = remains * 2;
            remainscopy = remains;
            while (remainscopy > 0)
            {
                count2++;
                remainscopy = remainscopy / 10;
            }
            if (count2 > 1)
            {
                multi = multi + remains / 10 + remains % 10;
            }
            else
            {
                multi = multi + remains;
            }
        }
        else
        {
            sum = sum + remains;
        }
        counter++;
    }
    final = sum + multi;
    final = final % 10;
    if (final != 0)
    {
        printf("INVALID");
    }
    else
    {
        if (count == 15 && (second == 34 || second == 37))
        {
            printf("AMEX");
        }
        else if (count == 16 &&
                 (second == 51 || second == 52 || second == 53 || second == 54 || second == 55))
        {
            printf("MASTERCARD");
        }
        else if ((count == 13 || count == 16) && first == 4)
        {
            printf("VISA");
        }
        else
        {
            printf("INVALID");
        }
    }
    printf("\n");
}
