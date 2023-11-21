#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - add newNode nodes to the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
