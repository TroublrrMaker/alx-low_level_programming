#include "main.h"
#include <stdio.h>
/**
 * main - Programme entry points
 * @argc: number of arguments
 * @argv: Arguments array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;
(void)argc;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
