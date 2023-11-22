#include "lists.h"
#include <stdlib.h>
/**
  * sum_listint - sums all elements of a list
  * @head: pointer to the head of the list
  * Return: sum of all elements
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
