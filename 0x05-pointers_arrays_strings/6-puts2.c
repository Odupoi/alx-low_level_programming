#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
int i = 0;

while (*(str + i))
{
_putchar(*(str + i));
i += 2;
}
_putchar('\n');
}
