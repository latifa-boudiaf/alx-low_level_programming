#include "main.h"

/**
 *print_alphabet_x10- prints the alphabets 10 times.
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int count = 0;

	while (count < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		letter = 'a'; /* Reset the letter to 'a' for the next iteration */
		_putchar('\n');
		count++;
	}
}
