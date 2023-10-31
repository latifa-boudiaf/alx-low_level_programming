#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments.
 * @ac: number of arguments.
 * @av: list of arguments.
 * Return: the concatenated arguments.
 */
char *argstostr(int ac, char **av)
{
	size_t total_length = 0;
	char *result;
	int i, position;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
			total_length += strlen(av[i]) + 1;
	}
	result = malloc(total_length + 1);
	if (result == NULL)
		return (NULL);
	position = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcpy(result + position, av[i]);
			position += strlen(av[i]);
			result[position] = '\n';
			position++;
		}
	}
	result[total_length] = '\0';
	return (result);
}
