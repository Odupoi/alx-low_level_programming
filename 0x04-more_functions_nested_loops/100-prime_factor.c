#include <stdio.h>
#include <math.h>
/**
 * main - main function
 * @n: the long integer parameter
 * @max_factor: the initialization
 * Return: void
 */

int main(void)
{
int n = 612852475143;
int max_factor = 0;

while (n % 2 == 0)
{
max_factor = 2;
n /= 2;
}
for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
max_factor = i;
n /= i;
}
}
if (n > 2)
{
max_factor = n;
}
printf("%lld\n", max_factor);
return (0);
}
