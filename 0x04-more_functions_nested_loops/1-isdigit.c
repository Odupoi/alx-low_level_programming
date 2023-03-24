#include "main.h"
/**
 * _isdigit - checks for a number in a given set
 * @c: parameter to be returned
 * Return: returns 1 if it is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}

