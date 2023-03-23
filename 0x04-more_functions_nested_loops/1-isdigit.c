#include "main.h"
/**
 * _isdigit - Check the code for digits ranging from 0 to 9
 * @c: is the integer to be checked
 * Return: 1 if int is a digit, return 0 if int is not digit
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
	return (1);
else
	return (0);

}
