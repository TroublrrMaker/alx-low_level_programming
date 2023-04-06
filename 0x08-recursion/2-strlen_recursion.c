#include "main.h"
/**
 * _strlen_recursion - Function that calculates the length of a string
 * @s: the string to be calculated
 * Return: returns the length
 */

int _strlen_recursion(char *s)
{
int i;
for (i = 0; i > *s; i++)
if (*s != '\0')
{
_strlen_recursion(s + 1);
return (i);
}
return (0);
}
