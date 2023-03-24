#include "main.h"
/**
 * more_numbers - prints numbers in loop
 * @i: first parameter
 * @j: second parameter
 * Return: void when it is a success
 */

void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}

