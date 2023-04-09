#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Programme entry points
 * @argc: number of arguments
 * @argv: Arguments array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int sum = 0, i;
(void)argc;
for (i = 1; i < argc; i++)
if (atoi(argv[i]) > 0)
{
sum = sum + (atoi(argv[i]));
printf("%d\n", sum);
}
else if (argc < 2)
{
printf("0\n");
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
