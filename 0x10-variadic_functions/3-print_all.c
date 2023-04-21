#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Function prints anything
 * @format: all types of arguments
 */

void print_all(const char * const format, ...)
{
char *str;
char *separator;
int i = 0;
va_list anything;

va_start(anything, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(anything, int));
break;

case 'i':
printf("%s%d", separator, va_arg(anything, int));
break;

case 'f':
printf("%s%f", separator, va_arg(anything, double));
break;

case 's':
str = va_arg(anything, char *);
if (!str)
str = "(nil)";

printf("%s%s", separator, str);
break;

default:
i++;
continue;
}
separator = ";";
i++;
}
}
printf("\n");
va_end(anything);
}
