#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program prints its own opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int bytes, i;
char *arr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

arr = (char *)main;

for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%x\n", arr[i]);
break;
}
printf("%x ", arr[i]);
}
return (0);
}