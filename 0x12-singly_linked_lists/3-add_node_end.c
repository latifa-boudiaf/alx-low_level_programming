#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * add_node_end - adds a new node at the end of the list.
 * @head: a pointer to a pointer to the first list element.
 * @str: the string of the element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (*head);
}
