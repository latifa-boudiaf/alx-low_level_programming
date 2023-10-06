#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Assigns a random number to 'n' and prints the last digit of 'n'
 * Return: 0(Success)
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("%d and is greater than 5\n", lastDigit);
	else if (lastDigit == 0)
		printf("%d and is 0\n", lastDigit);
	else
		printf("%d and is less than 6 and not 0\n", lastDigit);
	return (0);
}
