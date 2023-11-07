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
	int nlen, olen, i;
	dog_t *spike;

	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;
	spike = malloc(sizeof(dog_t));
	if (spike == NULL)
		return (NULL);

	spike->name = malloc(nlen * sizeof(doggy->name));
	if (spike == NULL)
		return (NULL);
	for (i = 0; i < nlen; i++)
		spike->name[i] = name[i];

	spike->age = age;

	spike->owner = malloc(olen * sizeof(doggy->owner));
	if (spike == NULL)
		return (NULL);
	for (i = 0; i < olen; i++)
		spike->owner[i] = owner[i];
	return (spike);
}
