#include "main.h"
/**
 * _isdigit - Check the code for digits ranging from 0 to 9
 * @c: is the character to be checked
 * Return: 1 if character is upper, return 0 if char is not upper
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
	return (1);
else
	return (0);

}
