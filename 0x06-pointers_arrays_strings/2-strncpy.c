#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes added to dest.
 *
 * Return: pointer to destination.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_end = 0;
	int src_iterator = 0;

	while (*(dest + dest_end) != '\0')
		dest_end++;
	while (*(src + src_iterator) != '\0' && n--)
	{
		*(dest + dest_end + src_iterator) = *(src + src_iterator);
		src_iterator++;
	}
	while (n--)
	{
		*(dest + dest_end + src_iterator) = '\0';
		src_iterator++;
	}
	return (dest);
}
