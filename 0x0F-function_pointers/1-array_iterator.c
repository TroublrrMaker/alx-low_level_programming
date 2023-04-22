#include "function_pointers.h"

/**
 * array_iterator - This function exec another fuctio given as aparam
 * @array:Integer array pointer
 * @size: Size of the array
 * @action: Fxn Pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
