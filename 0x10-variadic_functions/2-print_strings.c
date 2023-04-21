#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Function prints numbers
 * @n: arg count
 * @separator: printed before lines
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list add;
char *str;
unsigned int count;

va_start(add, n);

for (count = 0; count < n; count++)
{
str = va_arg(add, char *);

if (str == NULL)
{
printf("nil");
}
else
{
printf("%s", str);
}


if (count != (n - 1) && separator != NULL)
printf("%s", separator);

}
printf("\n");
va_end(add);
}
