#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// Declare functions to be used to calculate grade level
int count_letters(string word);
int count_words(string word);
int count_sentences(string word);

int main(void)
{
    // Prompt user for a string of text
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sent = count_sentences(text);

    // Determine grade level using Coleman-Liau index and display it
    float index = (0.0588 * letters / words * 100.0) - (0.296 * sent / words * 100.0) - 15.8;
    int level = round(index);
    if (level >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (level > 1 && level < 16)
    {
        printf("Grade %i\n", level);
    }
    else
    {
        printf("Before Grade 1\n");
    }
}

// Count the number of letters in a string of text
int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

// Count the number of words in a string of text
int count_words(string text)
{
    int words = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}

// Count the number of sentences in a string of text
int count_sentences(string text)
{
    int sent = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sent++;
        }
    }
    return sent;
}
