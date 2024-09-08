#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
void change(string s, int k);

int main(int argc, string argv[])
{
    string text;
    if (argc == 2)
    {
        if (only_digits(argv[1]) == false)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        text = get_string("plainext:  ");
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int k = atoi(argv[1]);
    printf("ciphertext: ");
    change(text, k);
    printf("\n");
}

bool only_digits(string s)
{
    for (int i = 0, a = strlen(s); i < a; i++)
    {
        if (isdigit(s[i]) == 0)
        {
            return false;
        }
    }
    return true;
}

void change(string s, int r)
{
    for (int i = 0, a = strlen(s); i < a; i++)
    {

        if (isalpha(s[i]))
        {
            if (islower(s[i]))
            {
                int point = (int) s[i] - 97;
                point = (point + r) % 26 + 97;
                printf("%c", point);
            }
            else if (isupper(s[i]))
            {
                int point = (int) s[i] - 65;
                point = (point + r) % 26 + 65;
                printf("%c", point);
            }
        }
        else
        {
            printf("%c", s[i]);
        }
    }
}
