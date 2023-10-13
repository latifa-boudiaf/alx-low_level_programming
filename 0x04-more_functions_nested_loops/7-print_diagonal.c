#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: The number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int spaces = 0;

		while (spaces < n)
		{
			int slashes = 0;

			while (slashes < spaces)
			{
				_putchar(' ');
				slashes++;
			}

			_putchar('\\');
			_putchar('\n');
			spaces++;
		}
	}
}
