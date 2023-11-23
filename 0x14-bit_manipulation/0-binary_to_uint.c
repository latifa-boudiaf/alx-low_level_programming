#include "main.h"

/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: decimal (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i+)
	{
		if (b[i] == '1')
			d = (d << 1) | 1;
		else if (b[i] == '0')
			d <<= 1;
		else
			return (0);
	}

	return (d);
}
