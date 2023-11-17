#include "lists.h"
#include <stdio.h>
/*
 * print_list - prints all the elements of a list_t list.
 * @h: a pointer to the list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", (unsigned long)h->len, h->str);	
		}
		h = h->next;
	}
	return (i);
}
