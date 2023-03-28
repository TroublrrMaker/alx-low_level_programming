#include "main.h"

/**
 * puts_half - Function prints only last half of character inputted
 * @str: Is the string to be slashed
 * Return: Always 0
 */

void puts_half(char *str)
{
int n = 0;
int len = 0;
int j;
for (j = 0; str[j] != '\0'; j++)
len++;
n = (len / 2);
if ((len % 2) == 1)
n = ((len + 1) / 2);

for (j = n; str[j] != '\0'; j++)
_putchar(str[j]);
_putchar('\n');
}
