#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str, *empt;
	unsigned int i, len, j;
	unsigned int s;

	len = 0;
	empt = "";
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0')
		len++;
	s = (len + n) * sizeof(char);
	new_str = malloc(s + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < s && s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < s && s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
