#include "lists.h"
#include <stdlib.h>

/**
 *
 *
 */
int sum_listint(listint_t *head)
{
	int s;

	s = 0;
	while (head != NULL)
	{
		s +=  head->n;
		head = head->next;
	}

	return (s);
}
