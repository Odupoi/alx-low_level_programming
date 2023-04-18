#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Create a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This function creates a new dog and returns a pointer to it.
 * Return: If memory allocation fails, return NULL. Otherwise, return a
 * pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(strlen(name) + 1);
dog->owner = malloc(strlen(owner) + 1);
if (dog->name == NULL || dog->owner == NULL)
{
free(dog->name);
free(dog->owner);
free(dog);
return (NULL);
}

strcpy(dog->name, name);
dog->age = age;
strcpy(dog->owner, owner);
return (dog);
}

