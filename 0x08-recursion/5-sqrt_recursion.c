#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * _sqrt_helper - contains the checker that passes two parameters
 * @n: the number to find the square root of.
 * @guess: the parameter or;container
 * Return: the square root of n, or -1
 * _sqrt_recursion - Recursive function that iterates
 * _sqrt_helper - contains the checker that passes two parameters
 */
int _sqrt_helper(int n, int guess);

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_helper(n, n / 2));
}
int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
else if (guess == 1 || guess == 0)
{
return (-1);
}
else if (guess * guess > n)
{
return (_sqrt_helper(n, guess / 2));
}
else
{
return (_sqrt_helper(n, (3 * guess) / 2));
}
}
