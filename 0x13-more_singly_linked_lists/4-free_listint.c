#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - frees a list
  * @head: pointer to the first list element
  */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	else
	{
		free_listint(head->next);
		free(head);
	}
}
