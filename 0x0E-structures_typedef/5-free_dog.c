#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free memory allocated for a dog
 * @d: Pointer to the dog to free
 *
 * Description: This function frees the memory allocated for a dog.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}

