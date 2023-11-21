#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - insert a node at index
  * @head: head of the list
  * @index: location to insert node
  * @n: value of the inserted node
  * Return: pointer to head of list
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *tmp, *newNode;
	unsigned int j;

	tmp = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (index == 0)
	{
		newNode->next = tmp;
		*head = newNode;
		return (*head);
	}
	for (j = 0; j < index - 1; j++)
	{
		tmp = tmp->next;
		if (!tmp)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = tmp->next;
	tmp->next = newNode;
	return (newNode);
}
