#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
int i, j;
char *leet_chars = "43071";
char *letters = "aeotlAEOTL";

for (i = 0; str[i]; i++)
{
for (j = 0; letters[j]; j++)
{
if (str[i] == letters[j])
{
str[i] = leet_chars[j / 5] + ((j % 5) / 4);
break;
}
}
}

return (str);
}

