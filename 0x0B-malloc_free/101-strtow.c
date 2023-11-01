#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * countWords - function to calculate the number of words
 * @str: string being passed to check for words
 *
 * Return: count of words
 */
int countWords(char *str)
{
    int a, total = 0;

    for (a = 0; str[a] != '\0'; a++)
    {
        if (*str == ' ')
            str++;
        else
        {
            for (; str[a] != ' ' && str[a] != '\0'; a++)
                str++;
            total++;
        }
    }
    return (total);
}

/**
 * free_all - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 */
void free_all(char **string, int i)
{
    for (; i > 0;)
        free(string[--i]);
    free(string);
}

/**
 * strtow - function that splits a string into words
 * @str: string being passed
 *
 * Return: NULL if the string is empty or NULL or if the function fails
 */
char **strtow(char *str)
{
    int total_words = 0, b = 0, c = 0, length = 0;
    char **words, *found_word;

    if (str == NULL || *str == '\0')
        return (NULL);
    total_words = countWords(str);
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
                free_all(words, b);
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

