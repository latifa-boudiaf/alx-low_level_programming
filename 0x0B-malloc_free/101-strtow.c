#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - function that splits string into words
 * @str: string being passed
 * Return: null if string is empty or null or function fails
 */
char **strtow(char *str)
{
    int total_words = 0, b = 0, c = 0, length = 0;
    char **words, *found_word;

    if (str == NULL || *str == '\0')
        return (NULL);

    for (int a = 0; str[a] != '\0'; a++)
    {
        if (*str == ' ')
            str++;
        else
        {
            for (; str[a] != ' ' && str[a] != '\0'; a++)
                str++;
            total_words++;
        }
    }

    if (total_words == 0)
        return (NULL);

    words = malloc((total_words + 1) * sizeof(char *);

    if (words == NULL)
        return (NULL);

    for (; *str != '\0' && b < total_words;)
    {
        if (*str == ' ')
            str++;
        else
        {
            found_word = str;
            for (; *str != ' ' && *str != '\0';)
            {
                length++;
                str++;
            }
            words[b] = malloc((length + 1) * sizeof(char));
            if (words[b] == NULL)
            {
                while (b > 0)
                    free(words[--b]);
                free(words);
                return (NULL);
            }
            while (*found_word != ' ' && *found_word != '\0')
            {
                words[b][c] = *found_word;
                found_word++;
                c++;
            }
            words[b][c] = '\0';
            b++;
            c = 0;
            length = 0;
            str++;
        }
    }
    return (words);
}

