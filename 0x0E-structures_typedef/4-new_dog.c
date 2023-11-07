#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new struct of type dog
 * @name: struct parameter name
 * @age: struct parameter age
 * @owner: struct parameter owner
 * Return: returns pointer to a new dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;
	dog_t *doggy;

	if (name == NULL || owner == NULL)
		return (NULL);

	len_name = strlen(name);
	len_owner = strlen(owner);

	doggy = malloc(sizeof(dog_t);
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc((len_name + 1) * sizeof(char));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	strcpy(doggy->name, name);

	doggy->age = age;

	doggy->owner = malloc((len_owner + 1) * sizeof(char));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	strcpy(doggy->owner, owner);

	return (doggy);
}

