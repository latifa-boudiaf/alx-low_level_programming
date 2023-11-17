#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
        list_t *new;
        int i;

        for (i = 0; str[i] != '\0'; i++)
                ;

        new = malloc(sizeof(list_t));
        if (new == NULL)
        {
                return (NULL);
        }

        new->str = strdup(str);
        if (new->str == NULL)
        {
                free(new);
                return (NULL);
        }

        new->len = i;
        new->next = *head;

        *head = new;
        return (*head);
}

