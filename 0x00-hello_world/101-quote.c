#include <stdio.h>

/**
 * main- entry point.
 * Return: 0(success)
 */
int main(void)
{
	char *message= "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(STDERR_FILENO, message, 59);
	return (0);
}
