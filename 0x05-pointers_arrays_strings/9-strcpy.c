#include "main.h"
/**
 * _strcpy - copy a string to another one.
 * @dest: the destination string.
 * @src: the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (*(src + length) != '\0')
	{
		*(dest + length) = *(src + length);
		length++;
	}
	*(dest + length) = *(src + length);
	return (dest);
}
