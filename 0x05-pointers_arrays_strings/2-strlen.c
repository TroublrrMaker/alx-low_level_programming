#include "main.h"

/**
 * _strlen - A function that prints the length of a string
 * @s: String
 * Return: string length
 */
int _strlen(char *s)
{
int str = 0;

while (*s != '\0')
{
str++;
s++;
}
return (str);
}
