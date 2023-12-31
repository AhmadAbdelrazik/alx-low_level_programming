#include "main.h"
/**
 * print_rev - print a string in reverse.
 * @s: the string.
 *
 * Return: Void.
 */
void print_rev(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	while (--length >= 0)
	{
		_putchar(*(s + length));
	}
	_putchar('\n');
}
