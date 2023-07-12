#include <stdio.h>
/**
 * main - main entry.
 * @argc: number of arguments.
 * @argv: the arguments array.
 *
 * Return: 0 at success.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
