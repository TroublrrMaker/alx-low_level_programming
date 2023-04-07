#include "main.h"
/**
 * factorial - Functional computes the factorial of a given number
 * @n: integer to be inputted
 * Return: returns the factorial of n
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n < 0)
{
return (-1);
}
else if (n != 1)
{
return (n * (n - 1));
}
else if (n == 1)
{
return (1);
}
return (0);
}
