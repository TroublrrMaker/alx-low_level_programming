#include "main.h"
/**
 * _strpbrk - Function that searches a string for ocurrence of a given string
 * @s: input
 * @accept: dest input
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}

return ('\0');
}
