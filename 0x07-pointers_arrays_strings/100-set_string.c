#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer of a pointer
 * @to: character pointer
 * Return: Always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
