#include "main.h"

/**
 * leet - Encodes a string into "1337"
 * @str: The input string to encode
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
    char *leetspeak = "aAeEoOtTlL";
    char *leetcode = "4433007711";

    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; leetspeak[j] != '\0'; j++)
        {
            if (str[i] == leetspeak[j])
            {
                str[i] = leetcode[j];
                break;  // Exit inner loop to avoid further comparisons
            }
        }
    }

    return str;
}

