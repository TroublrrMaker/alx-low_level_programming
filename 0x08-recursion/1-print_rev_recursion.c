#include "main.h"

/**
 * print_rev_recursion - Function to print a string in reverse
 * @s: string to be printed
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
_putchar(*s);
_print_rev_recursion(s--);
}
