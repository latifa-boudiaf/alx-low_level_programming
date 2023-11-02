#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: the elements of the array.
 * @size: the size of the array.
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i, total_size;
	unsigned char *byte_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	
	total_size = nmemb * size;
	byte_ptr = (unsigned char *)ptr;
	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;
	return (ptr);
}
