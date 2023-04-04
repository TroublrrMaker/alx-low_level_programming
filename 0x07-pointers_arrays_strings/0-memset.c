#include "main.h"
/**
 * _memset - Function fills a given memory area with variables
 * @s: pointer that points to a given memory area byte
 * @b: constant byte
 * @n: number of bytes
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
