#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: 0 if the strings match, a negative number if s1 is less than s2,
 *         or a positive number if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}

if (s1[i] == s2[i])
return (0);
else if (s1[i] < s2[i])
return (-1);
else
return (1);
}
