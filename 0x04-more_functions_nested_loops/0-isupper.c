#include "main.h"
/**
 * _isupper - Check the code uppercase character
 * @c: is the character to be checked
 * Return: 1 if character is upper, return 1 if char is not upper
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);

}
