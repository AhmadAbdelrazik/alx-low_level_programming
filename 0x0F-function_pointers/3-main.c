#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argc: number of arguments.
 * @argv: the arguments array.
 *
 * Return: 0 at success.
 */
int main(int argc, char *argv[])
{
	int op1, op2, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op1 = atoi(argv[1]);
	op2 = atoi(argv[3]);
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][0] == '/' && op2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = f(op1, op2);
	printf("%d\n", result);
	return (0);
}
