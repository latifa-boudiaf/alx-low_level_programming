#include "main.h"

/**
 * _islower- checks if a character is lower case or not.
 * @c: The character to be checked.
 * Return: 0(success).
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* c is a lowercase character */
	}
	else
	{
		return (0); /* c is not a lowercase character */
	}
}
