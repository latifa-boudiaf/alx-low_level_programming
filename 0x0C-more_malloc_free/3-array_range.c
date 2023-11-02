#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Create array of integers filled with numbers from min to max
 * @min: First number in the array
 * @max: Largest number in the array
 *
 * Return: Pointer to new array, NULL if failed
 */

int *array_range(int min, int max)
{
	int *arr;
	int arr_size, i, j;

	arr_size = max - min + 1;
	
	if (arr_size <= 0)
		return (NULL);

	arr = malloc(sizeof(int) * arr_size);

	if (arr == NULL)
		return (NULL);

	for (j = 0, i = min; i <= max; j++, i++)
		arr[j] = i;

	return (arr);
}
