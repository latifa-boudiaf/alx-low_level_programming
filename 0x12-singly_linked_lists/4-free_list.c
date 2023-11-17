#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
