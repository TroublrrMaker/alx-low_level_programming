#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function allocates memory using malloc
 * @b: Amount of memory
 * Return: return pointer or exit code 98
 */

void *malloc_checked(unsigned int b)
{
void *pointer;
pointer = malloc(b);
if (pointer == NULL)
{
exit(98);
}
return (pointer);
}
