#include "main.h"

/**
 * rev_string - takes a string and outputs string backwards
 * @s: string to be reversed
 * Return: Always 0
 */
void rev_string(char *s)
{
char reverse = s[0];
int sequence = 0;
int a;

while (s[sequence] != '\0')
sequence++;

for (a = 0; a < sequence; a++)
{
sequence--;
reverse = s[a];
s[a] = s[sequence];
s[sequence] = reverse;
}
}
