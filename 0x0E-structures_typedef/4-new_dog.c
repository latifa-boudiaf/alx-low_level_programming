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
	dog_t *doggy;

	len_name = len_owner = 0;
	while (name[len_name++])
		;
	while (owner[len_owner++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(len_name * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < len_name; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(len_owner * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < len_owner; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
