#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Prints a list of numbers, separated by a string
 * @separator: The separator to use between numbers
 * @n: The number of arguments to print
 * @...: The numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i, num;

va_start(args, n);

for (i = 0; i < n; i++)
{
num = va_arg(args, unsigned int);

if (separator != NULL && i != 0)
{
while (*separator)
{
putchar(*separator++);
}
}


if (num / 10)
print_numbers(NULL, 1, num / 10);

putchar(num % 10 + '0');
}

va_end(args);

putchar('\n');
}

