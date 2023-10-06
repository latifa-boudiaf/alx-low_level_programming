#include <stdio.h>

/* prints all letters in lowercase except e and q */
/**
 * main- entry point of the program.
 * Return: 0(success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
