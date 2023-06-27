#include "main.h"
/**
 * puts_half - print the second half of a string.
 * @str: the string.
 *
 * Return: Void.
 */
void puts_half(char *str)
{
	int length = 0;
	int size;

	while (*(str + length) != '\0')
	{
		length++;
	}
	size = length / 2;
	while (size > 0)
	{
		_putchar(*(str + length - size));
		size--;
	}
	_putchar('\n');
}
