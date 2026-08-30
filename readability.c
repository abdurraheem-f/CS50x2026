#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
int only_letter(string text);
int only_word(string text);
int only_sentence(string text);
int main()
{
    string text = get_string("Text: ");

    float letter = only_letter(text);
    float word = only_word(text);
    float sentence = only_sentence(text);

    float L = (letter / word) * 100;
    float S = (sentence / word) * 100;

    float coleman = 0.0588 * L - 0.296 * S - 15.8;
    int index = round(coleman);
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int only_letter(string text)
{
    int letter = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            letter++;
        }
    }
    return letter;
}

int only_word(string text)
{
    int spaces = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            spaces++;
        }
    }
    int word = spaces + 1; // i need to know why not spaces ++ ??
    return word;
}

int only_sentence(string text)
{
    int sentence = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '?' || text[i] == '!' || text[i] == '.')
        {
            sentence++;
        }
    }
    return sentence;
}
