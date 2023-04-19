#include "function_pointers.h"
/**
 * print_name - Function prints a name
 * @name: name variable
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
