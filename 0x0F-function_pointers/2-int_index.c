#include "function_pointers.h"

/**
 * int_index - Function searches for an integer
 * @array: Array
 * @size: Size of the array
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
