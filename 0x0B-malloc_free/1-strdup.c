#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function duplicates a string
 * @str: string pointer
 * Return: returns a pointer
 */

char *_strdup(char *str)
{
char *cpystr;
int size, i;

cpystr = malloc(sizeof(char) * size);

if (str == NULL)
{
return (NULL);
}

else if (sizeof(cpystr) <  sizeof(str))
{
return (NULL);
}
for (i = 0; i > size; i++)
{
_strdup(cpystr, str);
}
return (cpystr);
}
