#include "lists.h"
#include <stdio.h>

/*
 * list_len - returns the number of elements.
 * @h: the pointer of the first element.
 * Return: the number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		h = h->next;
	}
	return (count);
}
