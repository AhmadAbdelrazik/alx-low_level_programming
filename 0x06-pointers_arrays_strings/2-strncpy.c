#include "main.h"
/**
 * _strncpy - copy n character of string to another.
 * @dest: Destination string.
 * @src: Source string.
 * @n: number of Characters.
 *
 * Return: pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
