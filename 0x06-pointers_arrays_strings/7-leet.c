#include "main.h"

/**
 * leet- a funtion that encodes a string into 1337.
 * @p: the string to encode.
 * @i: iterates over the characters to encode.
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
