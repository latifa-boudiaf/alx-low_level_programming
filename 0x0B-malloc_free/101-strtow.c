#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - function that splits a string into words
 * @str: the string to split
 * Return: array of words (strings)
 */
char **strtow(char *str)
{
    int total_words = 0, b = 0, c = 0, length = 0;
    char **words, *found_word;

    if (str == NULL || *str == '\0')
        return (NULL);

    total_words = 0;
    for (int a = 0; str[a] != '\0'; a++)
    {
        if (str[a] == ' ')
            continue;

        found_word = str + a;
        while (str[a] != ' ' && str[a] != '\0')
        {
            length++;
            a++;
        }
        total_words++;
    }

    if (total_words == 0)
        return (NULL);

    words = malloc((total_words + 1) * sizeof(char *);

    if (words == NULL)
        return (NULL);

    for (int i = 0; i < total_words; i++)
    {
        while (*str == ' ')
            str++;

        found_word = str;
        length = 0;
        while (*str != ' ' && *str != '\0')
        {
            length++;
            str++;
        }

        words[i] = malloc((length + 1) * sizeof(char));
        if (words[i] == NULL)
        {
            while (i > 0)
                free(words[--i]);
            free(words);
            return (NULL);
        }

        for (int j = 0; j < length; j++)
        {
            words[i][j] = found_word[j];
        }
        words[i][length] = '\0';
    }
    words[total_words] = NULL;
    return (words);
}

