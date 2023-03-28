#include "main.h"
#include <unistd.h>
/**
 * _puts - prints a string to stdout followed by a newline
 * @str: pointer to string
 *
 * Return: void
 */
void _puts(char *str)
{
int i;

i = 0;
while (str[i] != '\0')
{
i++;
}
write(STDOUT_FILENO, "\n", 1);
}
