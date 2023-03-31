#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - encodes a string using the ROT13 cipher
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
char *result = malloc(strlen(str) + 1);  /* allocate memory for the result */
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
j = str[i] - 'a';  /* shift the character to a 0-based index */
j = (j + 13) % 26;  /* apply the ROT13 cipher */
result[i] = 'a' + j;  /* shift the index back to the*/
}
else if (str[i] >= 'A' && str[i] <= 'Z')  /* check uppercase letter */
{
j = str[i] - 'A';  /* shift the character to a 0-based index */
j = (j + 13) % 26;  /* apply the ROT13 cipher */
result[i] = 'A' + j;  /* shift the index back to the corresponding character */
}
else
{
result[i] = str[i];  /* keep the character unchanged */
}
}

result[i] = '\0';  /* add null terminator to the end of the result string */
return (result);
}

