#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - Frees a list and sets its head to NULL
  * @head: double pointer to head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *walker;

	if (head == NULL)
		return;
	walker = *head;
	while (walker != NULL)
	{
		tmp = walker;
		walker = walker->next;
		free(tmp);
	}
	*head = NULL;
}
