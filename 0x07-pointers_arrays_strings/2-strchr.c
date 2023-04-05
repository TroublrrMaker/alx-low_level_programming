#include "main."

/**
 * _strchr - Function that finds a character in a string
 * @s: string to be searched
 * @c: character to be found
 * Return: returns pointer of c or null
 */
char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
else
{
return (0);
}
}
}
