#include "Function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program  prints the result of simple operations
 * @argc: Number of arg
 * @argv: actualargs
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
int firstnum;
int secondnum;
char *op;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

firstnum = atoi(argv[1]);
op = argv[2];
secondnum = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*op == '/' && secondnum == 0) || (*op == '%' && secondnum == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(firstnum, secondnum));
return (0);
}
