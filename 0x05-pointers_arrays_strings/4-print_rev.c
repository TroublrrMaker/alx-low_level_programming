#include "main.h"

/**
 * print_rev - takes a string and outputs string backwards
 * @s: string to be inputted
 * Return: Always 0
 */
void print_rev(char *s)
{
int i = 0;
int a;

while (*s != '\0')
{
i++;
s++;
}
s--;
for (a = i; a > 0; a--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
