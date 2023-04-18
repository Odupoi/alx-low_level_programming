#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog variable to initialize
 * @name: name to set for the struct dog
 * @age: age to set for the struct dog
 * @owner: owner to set for the struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = strdup(name);
d->age = age;
d->owner = strdup(owner);
}

