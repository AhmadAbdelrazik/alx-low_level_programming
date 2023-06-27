#include "main.h"
/**
 * rev_string - reverse a given string.
 * @s: the string.
 *
 * Return: Void.
 */
void rev_string(char *s)
{
	int length = 0;
	int size = 0;
	char temp;

	while (*(s + size) != '\0')
	{
		size++;
	}
	size--;
	while (size - length > length)
	{
		temp = *(s + length);
		*(s + length) = *(s + (size - length));
		*(s + (size - length)) = temp;
		length++;
	}
}
