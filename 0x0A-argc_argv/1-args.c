#include "main.h"
#include <stdio.h>
/**
 * main - Programme entry points
 * @argc: number of arguments
 * @argv: Arguments array
 * @i: iteration
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 1; i < argc; i++)
{
printf("%s\n %d\n", argv[i], argc);
}
return (0);
}
