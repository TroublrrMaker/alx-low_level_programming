/* 
 * _islower - check if character is lowercase
 * c: is the character to be checked
 * Return: 0 if char is lowercase, otherwise 1.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
