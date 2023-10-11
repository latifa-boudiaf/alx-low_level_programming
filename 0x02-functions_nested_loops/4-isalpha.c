#include "main.h"

/**
 * _isalpha- Entry point.
 * @c:  the character to be checked.
 * Return: 0 (success).
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* c is an alphabetic character */
	}
	else
	{
		return (0); /* c is not an alphabetic character */
	}
}
