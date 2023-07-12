#include <stdio.h>
/**
 * main - main entry.
 * @argc: number of arguments.
 * @argv: the arguments.
 *
 * Return: 0 at success.
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n1 = argv[1];
	n2 = argv[2];
	printf("%d\n", n1 * n2);
	return (0);
}
