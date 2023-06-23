#include "main.h"
/**
 * print_square - print a square of area n*n using #
 * @size: the length of square side.
 *
 * Return: Void
 */
void print_square(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
