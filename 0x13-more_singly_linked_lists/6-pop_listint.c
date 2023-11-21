#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list.
 * @head: the pointer to the first list element.
 * Return: 0 if empty and the value of the node otherwise.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int d;

	if (head == NULL)
		return (0);
	tmp = *head;
	if (*head)
	{
		d = tmp->n;
		*head = tmp->next;
		free(tmp);
	}
	else
		d = 0;

	return (d);
}
