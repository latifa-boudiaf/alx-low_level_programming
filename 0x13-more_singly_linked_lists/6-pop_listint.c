#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list.
 * @head: the pointer to the first list element.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->data;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
