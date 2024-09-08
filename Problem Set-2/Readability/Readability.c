#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int letter(string s);
int words(string s);
int sentence(string s);
float calculation(float L, float S);

int main(void)
{
    string text = get_string("Text: ");
    int l = letter(text);
    int w = words(text);
    float L = ((float) l / (float) w) * 100;
    int s = sentence(text);
    float S = ((float) s / (float) w) * 100;
    float c = calculation(L, S);
    c = round(c);
    if (c < 1)
    {
        printf("Before Grade 1");
    }
    else if (c > 16)
    {
        printf("Grade 16+");
    }
    else
    {
        printf("Grade %i", (int) c);
    }
    printf("\n");
}

int letter(string s)
{
    int count = 0;
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if (isalpha(s[i]))
        {
            count++;
        }
    }
    return count;
}

int words(string s)
{
    int count = 0;
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if (isblank(s[i]))
        {
            count++;
        }
    }
    count++;
    return count;
}

int sentence(string s)
{
    int count = 0;
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            count++;
        }
    }
    return count;
}

float calculation(float L, float S)
{
    return (0.0588 * L) - (0.296 * S) - 15.8;
}
