#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the values of a struct dog
 * @d: pointer to struct dog to print
 *
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Name: ");
if (d->name != NULL)
printf("%s\n", d->name);
else
printf("(nil)\n");

printf("Age: ");
if (d->age >= 0)
printf("%f\n", d->age);
else
printf("(nil)\n");

printf("Owner: ");
if (d->owner != NULL)
printf("%s\n", d->owner);
else
printf("(nil)\n");
}

