#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int key[100];
int i, j, sum;
sum = 0;

srand(time(NULL));

for (i = 0; i < 100; i++)
{
key[i] = rand() % 78;
sum += (key[i] + '0');
putchar(key[i] + '0');
if ((2772 - sum)-'0' < 78)
{
j = 2772 - sum - '0';
sum += j;
putchar(j + '0');
break;
}
}

return (0);
}
