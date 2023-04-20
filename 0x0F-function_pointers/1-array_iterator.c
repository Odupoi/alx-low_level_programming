#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Applies a function to each element of an array
 *
 * @array: Pointer to the 
 * array
 * @size: Size of the array
 * @action: Pointer to the function to apply to each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}

/**
 * print_element - Prints an integer to stdout
 *
 * @element: The integer to print
 */

void print_element(int element)
{
putchar(element + '0');
putchar('\n');
}
