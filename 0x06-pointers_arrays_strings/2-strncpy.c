#include "main.h"
/**
 * _strncpy- Function copies a string
 * @src: string to be copied
 * @dest: another string file
 * @n: bytes
 * Return: return dest parameter
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
