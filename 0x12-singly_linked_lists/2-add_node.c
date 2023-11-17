#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * add_node - adds a new node at the begenning of the list.
 * @head: a pointer to a pointer to the first list element.
 * @str: the string of the element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
