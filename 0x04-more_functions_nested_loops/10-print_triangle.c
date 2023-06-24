#include "main.h"
/**
 * print_triangle - used to print a triangle using #
 * @size: the length of a triangle
 *
 * Return: Void
 */
void print_triangle(int size)
{
	int spaces;
	int hashs;
	int lines;

	if (size > 0)
	{
	for (lines = 1; lines <= size; lines++)
	{
	for (spaces = 0; spaces < size - lines; spaces++)
	{
		_putchar(' ');
	}
	for (hashs = 0; hashs < lines; hashs++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
