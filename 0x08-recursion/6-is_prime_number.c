#include "main.h"
#include <math.h>
/**
 * is_prime_number - checks if a given integer is a prime number
 *
 * @n: the integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int limit, i;
if (n <= 1)
{
return (0);
}
limit = sqrt(n);
for (i = 2; i <= limit; i++)
{
if (n % i == 0)
{
return (0);
}
}

return (1);
}

