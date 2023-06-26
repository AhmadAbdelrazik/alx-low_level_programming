#include "main.h"
/**
 * _strlen - return the length of a string.
 * @s: the string.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int length = 1;

	while (*(s + length) != '\0')
	{
		length++;
	}
	if (*s == '\0')
		return (0);
	else
		return (length);
}
