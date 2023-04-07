#include "main.h"
/**
 * factorial - Functional computes the factorial of a given number
 * @n: integer to be inputted
 * Return: returns the factorial of n
 */
int factorial(int n)
{
int res;
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else if (n != 1)
{
factorial(res = n * (n - 1));
n--;
return (res);
}
return (0);
}
