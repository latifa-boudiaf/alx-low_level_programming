#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * countWords - function to calculate number of words
 * @str: string being passed to check for words
 *
 * Return: countWords of words
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
 * str_split - Splits a string
 * @str: The string that will be splited
 * 
 * Return: On success, it returns the new array
 * of strings. On failure, it returns NULL
 */
char **str_split(char *str, int *number_of_words)
{
    char *piece, **str_arr = NULL, *str_cpy = NULL;
    int i = 0;

    if (str == NULL)
    {
        return (NULL);
    }
    str_cpy = strdup (str);
    piece = strtok(str_cpy, " ");
    while (piece != NULL)
    {
        if ((*piece) == '\n')
        {
            piece = strtok(NULL, " ");
            continue;
        }
        (*number_of_words)++;
        piece = strtok(NULL, " ");
    }

    str_arr = (char **)malloc(sizeof(char *) * (*number_of_words));
    piece = strtok(str, " ");
    for (i = 0; piece != NULL; i++)
    {
        if ((*piece) == '\n')
        {
            piece = strtok(NULL, " ");
            continue;
        }
        str_arr[i] = (char *)malloc(sizeof(char) * (strlen(piece) + 1));
        strcpy(str_arr[i], piece);
        piece = strtok(NULL, " ");
    }

    if (str_cpy)
        free (str_cpy);

    return (str_arr);
}

char **strtow(char *str)
{
	return str_split(*str, countWords(*str);
}	
