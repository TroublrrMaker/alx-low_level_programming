#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers- Function prints numbers
 * @n: arg count
 * @separator: printed before lines
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list add;
unsigned int count;

va_start(add, n);

for (count = 0; count < n; count++)
{
printf("%d", va_arg(add, int));

if (count != (n - 1) && separator != NULL)
printf("%s", separator);

}
printf("\n");
va_end(add);
}
