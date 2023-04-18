#include <stdio.h>

/**
 * struct dog - a struct representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @breed: the breed of the dog
 */
typedef struct dog
{
char *name;
int age;
char *breed;
} dog_t;

/**
 * print_dog - prints a dog struct
 * @d: a pointer to the dog struct to print
 *
 * Description: This function prints the name, age, and breed of a dog struct.
 * If an element is NULL, it prints (nil) instead of the element's value.
 * If d is NULL, this function does nothing.
 */
void print_dog(dog_t *d)
{
if (d == NULL)
return;

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %d\n", d->age);
printf("Breed: %s\n", d->breed ? d->breed : "(nil)");
}

