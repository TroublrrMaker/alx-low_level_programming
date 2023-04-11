#include <stdio.h>
#include <stdlib.h>
#include "main.h"		
/**
 * main - Program Entry point
 * @argc: number of arguments
 * @argv: Arguments array
 * Return: Always 0
 */		
int main(int argc, char *argv[])		
{
int num, i, change;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
change = 0;
if (num < 0)		
{
printf("0\n");
return (0);
}
for (i = 0; i < 5 && num >= 0; i++)		
{
while (num >= coins[i])
{
change++;
num = num - coins[i];
}
}
printf("%d\n", change);
return (0);
}
