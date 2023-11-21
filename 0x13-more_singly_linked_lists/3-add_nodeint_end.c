#include "lists.h"
#include <stdlib.h>



listint_t *add_nodeint_end(listint_t **head, const int n)
{      
	listint_t *newNode, *tmp;
	
 	tmp = *head;
	newNode = malloc(sizeof(listint_t));
	if ( newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	tmp = *head;

	while (tmp)
		tmp = tmp->next;

	tmp->next = newNode;
	return (*head);
}
