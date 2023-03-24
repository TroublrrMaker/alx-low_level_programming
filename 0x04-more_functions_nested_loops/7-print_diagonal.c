#include "main.h"

/**
 * print_line - prints a straight line
 * @n: is the number of times the line is printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('\\');
}
_putchar('\n');
}
}
