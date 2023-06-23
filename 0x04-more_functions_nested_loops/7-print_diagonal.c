#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal.
 * @n: the number of times \ is printed.
 *
 * Return: Void.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int lines;
		int spaces;

	for (lines = 0; a < n; a++)
	{
	for (spaces = 0; spaces < lines; spaces++)
	{
		_putchar(' ');
	}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
