#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to the name to be printed
 * @f: function pointer to a functio
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}

/**
 * print_to_console - prints a name to the console
 * @name: pointer to the name to be printed
 *
 * Return: void
 */
void print_to_console(char *name)
{
printf("Name: %s\n", name);
}
