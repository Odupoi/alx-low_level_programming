#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring in @haystack,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j, k;

for (i = 0; haystack[i] != '\0'; i++)
{
k = i;
                for (j = 0; needle[j] != '\0' && haystack[k] == needle[j]; j++, k++);

if (needle[j] == '\0')
return (haystack + i);
}

        return (0);
}

