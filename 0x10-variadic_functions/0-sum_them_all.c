#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function adds all args sent
 * @n: arg count
 * Return: Always 0;
 */

int sum_them_all(const unsigned int n, ...)
{
va_list add;

if ( n == 0)
{
return (0);
}
else
{
va_start(add, n);
unsigned int i;
int sum = 0;

for (i = 0; i < n; i++)
{
sum += va_arg(add, int);
}

va_end(add);
return (sum);
}
}
