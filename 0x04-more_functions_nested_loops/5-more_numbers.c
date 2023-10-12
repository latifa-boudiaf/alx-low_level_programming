#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, repeated 10 times, followed by a newline
 */

void more_numbers(void)
{
	int i, number;

	for (i = 0; i < 10; i++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar('0' + (number / 10));
			_putchar('0' + (number % 10));
		}
		_putchar('\n');
	}
}
