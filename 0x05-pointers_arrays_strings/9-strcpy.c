#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @src: copy from here
 * @dest: pasted here
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int j = 0;

while (*(src + i) != '\0')
{
i++;
}
for ( ; j < l ; j++)
{
dest[j] = src[j];
}
dest[i] = '\0';
return (dest);
}
