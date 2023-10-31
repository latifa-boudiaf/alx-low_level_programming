#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: a pointer to the new string.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	size_t size1, size2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1);
	size2 = strlen(s2);
	new_str = malloc(size1 + size2 + 1);
	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, s1);
	strcat(new_str, s2);
	return (new_str);
}
