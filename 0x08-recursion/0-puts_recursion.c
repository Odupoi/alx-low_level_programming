#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string recursively
 * @s: pointer to the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0') /* base case: end of string */
{
putchar('\n'); /* print a new line character */
return;
}
putchar(*s); /* print the current character */
_puts_recursion(s + 1);
}
