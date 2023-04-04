#include "main.h"

/**
 * _memcpy - copy data from a memory area to another
 * @dest: final location of data
 * @src: initial location of data
 * @n: bytes of memory
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int j = n;
for (; i < j; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
