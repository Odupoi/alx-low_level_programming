#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to the destination buffer
 * @src: pointer to the source of data to be copied
 * @n: number of bytes to copy
 *
 * Return: pointer to destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}

return (dest);
}

