#include "main.h"

/**
 * swap_int - A function to swap the values of two integers
 * @a: first int
 * @b: second int
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
