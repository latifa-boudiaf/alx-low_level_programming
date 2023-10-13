#include <stdio.h>
#include <math.h>

int main(void)
{
	long number = 612852475143;
	long largestPrime = -1;
	int i;

	while (number % 2 == 0)
	{
		largestPrime = 2;
		number /= 2;
	}

	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largestPrime = i;
			number /= i;
		}
	}

	if (number > 2)
	{
		largestPrime = number;
	}

	printf("%ld\n", largestPrime);

	return (0);
}
