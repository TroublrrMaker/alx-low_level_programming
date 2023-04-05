#include "main.h"
/**
 * _strpbrk - Function that searches a string for any of a set of bytes
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
if (*s == accept[k])
return (s);
}
s++;
}

return ('\0');
}
