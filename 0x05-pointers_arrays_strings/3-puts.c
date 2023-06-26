#include "main.h"
/**
 * _puts - print a given string.
 * @str: the string pointer.
 *
 * Return: Void.
 */
void _puts(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		_putchar(*(str + length));
		length++;
	}
	_putchar('\n');
}
