#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list.
 * @head: the pointer to the first list element.
 * Return: 0 if empty and the value of the node otherwise.
 */

int pop_listint(listint_t **head)
{
	int d;

	if (head == NULL)
		return (0);
	if (*head)
	{
		d = (*head)->n;
		*head = (*head)->next;
	}

	return (d);
}
