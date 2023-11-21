#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * delete_nodeint_at_index - delete a node at index
  * @head: head of the list
  * @index: location of the node to delete
  * Return: pointer to head of list
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *deletedNode;

	if (!head || !*head)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		tmp = current->next;
		if (tmp == NULL)
			return (-1);
	}
	deletedNode = tmp->next;
	tmp->next = current->next->next;
	free(deletedNode);
	return (1);
}
