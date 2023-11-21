#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a list.
 * @head: the pointer to the first list element.
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	int data = (*head)->data;
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
