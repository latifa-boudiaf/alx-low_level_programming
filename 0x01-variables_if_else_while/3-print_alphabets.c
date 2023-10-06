#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase, then uppercase, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);  /* Print lowercase */
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);  /* Print uppercase */
	}

	putchar('\n');  /* Print a newline character */

	return (0);
}
