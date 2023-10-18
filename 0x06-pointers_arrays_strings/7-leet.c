#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: the string to encode.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	char *p = str;
	int i;

	while (*str)
	{
		for (i = 0; i < 10; i++)
		{
			if (*str == "aAeEoOtTlL"[i])
			{
				*str = "4433007711"[i];
				break;
			}
		}
		str++;
	}

	return (p);
}
