#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool check_repeat(string s);
char array[26];
void cipher(string s, string k);
bool only_alpha(string s);
int main(int argc, string argv[])
{
    // validation complete
    string text;
    if (argc == 2)
    {
        if (!only_alpha(argv[1]))
        {
            return 1;
        }

        if (strlen(argv[1]) != 26)
        {
            printf("Error, not 26 characters\n");
            return 1;
        }
        if (check_repeat(argv[1]))
        {
            return 1;
        }
        text = get_string("plainext:  ");
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // all to upper
    for (int i = 0, a = strlen(argv[1]); i < a; i++)
    {
        array[i] = toupper(argv[1][i]);
    }
    // fn call
    printf("ciphertext: ");
    cipher(text, array);
    printf("\n");
}

bool check_repeat(string s)
{
    // check complete
    for (int i = 0, a = strlen(s); i < a; i++)
    {
        for (int j = i + 1, b = strlen(s); j < b; j++)
        {
            if (s[i] == s[j])
            {
                printf("Repeation of characters");
                return true;
            }
        }
    }
    return false;
}

bool only_alpha(string s)
{
    for (int i = 0, a = strlen(s); i < a; i++)
    {
        if (isalpha(s[i]) == 0)
        {
            return false;
        }
    }
    return true;
}

void cipher(string s, string k)
{
    for (int i = 0, a = strlen(s); i < a; i++)
    {

        if (isalpha(s[i]))
        {
            if (islower(s[i]))
            {
                char c = toupper(s[i]);
                int point = (int) c - 65;
                char l = k[point];
                printf("%c", tolower(l));
            }
            else if (isupper(s[i]))
            {
                int point = (int) s[i] - 65;
                char u = k[point];
                printf("%c", u);
            }
        }
        else
        {
            printf("%c", s[i]);
        }
    }
}
