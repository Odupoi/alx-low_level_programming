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
char leet_table[256] = {0};

/* Initialize leet table */
leet_table['a'] = '4';
leet_table['A'] = '4';
leet_table['e'] = '3';
leet_table['E'] = '3';
leet_table['o'] = '0';
leet_table['O'] = '0';
leet_table['t'] = '7';
leet_table['T'] = '7';
leet_table['l'] = '1';
leet_table['L'] = '1';

/* Apply leet encoding */
for (i = 0; str[i]; i++)
{
for (j = 0; j < 256; j++)
{
if (str[i] == j && leet_table[j] != 0)
{
str[i] = leet_table[j];
break;
}
}
}

return (str);
}


