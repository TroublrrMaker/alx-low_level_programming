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
int i, j;

if (str == NULL)
{
return (NULL);
}

i = 0;
while (str[i] != '\0')
i++;

cpystr = malloc(sizeof(char) * (i + 1));

if (cpystr == NULL)
{
return (NULL);
}

for (j = 0; str[j]; j++)
{
cpystr[j] = str[j];
}

return (cpystr);
}
