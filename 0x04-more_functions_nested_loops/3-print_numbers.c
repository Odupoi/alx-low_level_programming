#include "main.h"
/**
 * print_numbers - function prints the numbers
 * @i: the parameter to be printed
 * Return:  0  a success
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
	_putchar(i + '0');
	}
	_putchar('\n');
}
