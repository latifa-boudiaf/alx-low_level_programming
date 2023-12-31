#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - returns a pointer pointing to a stirng
 * which is a duplicate of the string str.
 * @str:  the string that would be duplicate.
 * Return: 0(success), NULL if the string is NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	size_t size;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	ptr = malloc(size + 1);

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, str);
	return (ptr);
}
