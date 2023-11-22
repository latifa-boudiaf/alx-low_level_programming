#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back, *front;
	back = NULL;
	front = NULL;
	
	while (*head != NULL) 
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}

	*head = back;
	return *head;
}

