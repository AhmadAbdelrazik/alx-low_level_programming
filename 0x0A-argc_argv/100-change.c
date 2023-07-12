#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry.
 * @argc: argument count.
 * @argv: argument values.
 *
 * Return: 0 at success.
 */
int main(int argc, char *argv[])
{
	int value, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("0\n");
		return (0);
	}
	while (value >= 25)
	{
		value -= 25;
		change++;
	}
	while (value >= 10)
	{
		value -= 10;
		change++;
	}
	while (value >= 5)
	{
		value -= 5;
		change++;
	}
	while (value >= 2)
	{
		value -= 2;
		change++;
	}
	while (value >= 1)
	{
		value -= 1;
		change++;
	}
	printf("%d\n", change);
	return (0);
}
