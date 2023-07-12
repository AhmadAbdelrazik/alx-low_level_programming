#include <stdio.h>
/**
 * main - main function.
 * @argc: count of the arguments.
 * @argv: pointer to the arguments array
 *
 * Return: 0 at success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
