#include "main.h"

/**
 * rev_string - takes a string and outputs string backwards
 * @s: string to be reversed
 * Return: Always 0
 */
void rev_string(char *s)
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
