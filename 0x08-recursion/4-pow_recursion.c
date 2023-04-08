#include "main.h"
/**
 * _pow_recursion - Function to return an integer to a given power
 * @x: Integer
 * @y: power
 * Return: An integer
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

else if (y == 0)
return (x * (_pow_recursion(x, y - 1)));
}
