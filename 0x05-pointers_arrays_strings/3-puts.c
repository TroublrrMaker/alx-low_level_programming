#include "main.h"

/**
 * _puts - This function prints a string to the output
 * @str: Is the string to be printed
 * Return: Void
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
