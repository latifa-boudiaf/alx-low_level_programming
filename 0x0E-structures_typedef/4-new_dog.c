#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner, i;
	dog_t *spike;

	len_name = len_owner = 0;
	for (; name[len_name++] != '\0'; )
		;
	for (; owner[len_owner++] != '\0'; )
		;
	spike = malloc(sizeof(dog_t));
	if (spike == NULL)
		return (NULL);

	spike->name = malloc(len_name * sizeof(doggy->name));
	if (spike == NULL)
		return (NULL);
	for (i = 0; i < len_name; i++)
		spike->name[i] = name[i];

	spike->age = age;

	spike->owner = malloc(len_owner * sizeof(doggy->owner));
	if (spike == NULL)
		return (NULL);
	for (i = 0; i < len_owner; i++)
		spike->owner[i] = owner[i];
	return (spike);
}
