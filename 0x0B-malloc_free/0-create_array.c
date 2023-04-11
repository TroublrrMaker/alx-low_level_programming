#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates a character array and init with  specific char
 * @size: size parameter
 * @c: Array of Char
 * Return: pointer value if success and NULL if failed
 */

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
else if (str == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
str[i] = c;
}
return (str);
}
