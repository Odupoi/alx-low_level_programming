#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct representing a dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner's name
 *
 * Description: This struct represents a dog and its properties.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/**
 * init_dog - Initializes a dog struct
 * @my_dog: Pointer to dog struct
 * @name: Dog name string
 * @age: Dog age float
 * @own`er: Dog owner name string
 *
 * Description: This function initializes a dog struct with a given name,
 * age, and owner name.
 */
void init_dog(struct dog *my_dog, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */


