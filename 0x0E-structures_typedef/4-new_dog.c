#include <stdlib.h>
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
    int i;

    if (name == NULL || owner == NULL)
        return (NULL);

    len_name = 0;
    while (name[len_name])
        len_name++;

    len_owner = 0;
    while (owner[len_owner])
        len_owner++;

    doggy = malloc(sizeof(dog_t));
    if (doggy == NULL)
        return (NULL);

    doggy->name = malloc((len_name + 1) * sizeof(char));
    if (doggy->name == NULL)
    {
        free(doggy);
        return (NULL);
    }

    for (i = 0; i < len_name; i++)
        doggy->name[i] = name[i];
    doggy->name[i] = '\0';

    doggy->age = age;

    doggy->owner = malloc((len_owner + 1) * sizeof(char));
    if (doggy->owner == NULL)
    {
        free(doggy->name);
        free(doggy);
        return (NULL);
    }

    for (i = 0; i < len_owner; i++)
        doggy->owner[i] = owner[i];
    doggy->owner[i] = '\0';

    return (doggy);
}

