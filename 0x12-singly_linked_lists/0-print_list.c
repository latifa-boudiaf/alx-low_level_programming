#include "lists.h"
#include <stdio.h>

/*
 * print_list - prints all the elements of a list_t list.
 * @h: a pinter to the list.
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	list_t *ptr;
	size_t nbr_nodes;

	ptr = h;
	nbr_nodes = 0;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%zu] %s\n", ptr, ptr->str);
		}
		ptr = ptr->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}
