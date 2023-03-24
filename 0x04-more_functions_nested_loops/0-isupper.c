#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: parameter to be printed
 * Return: 1 if 'c' is uppercase else return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}

