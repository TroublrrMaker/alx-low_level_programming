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
unsigned int count, sum = 0;
if (n == 0)
return (0);

va_start(add, n);

for (count = 0; count < n; count++)

sum += va_arg(add, int);


va_end(add);
return (sum);
}
