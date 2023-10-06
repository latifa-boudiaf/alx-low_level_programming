#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* This code prints the last digit of a given number */
/**
 * main- the main function of the program.
 * Return: 0(success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit = n % 10;
	char *message;
	if (lastDigit > 5)
		message = "greater than 5";
	else if (lastDigit == 0)
		message = "0";
	else
		message = "less than 6 and not 0";
	printf("Last digit of %d is %d and is %s\n", n, lastDigit, message);
	return (0);
}
