#include "lists.h"
#include <stdio.h>
/*
 * print_list - prints all the elements of a list_t list.
 * @h: a pointer to the list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t i;

	current = h;
	for (i = 0; current; i++)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);	
		}
		current = current->next;
	}
	return (i);
}
