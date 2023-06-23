#include "main.h"
/**
 * print_line - print a line of _ of length n.
 * @n: the length of line.
 *
 * Return: Void
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
