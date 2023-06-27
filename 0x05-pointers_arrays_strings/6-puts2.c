#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character.
 * @str: the string.
 *
 * Return: Void.
 */
void puts2(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
	if (length % 2)
	{
		length++;
		continue;
	}
	else
	{
		_putchar(*(str + length));
		length++;
	}
	}
	_putchar('\n');
}
