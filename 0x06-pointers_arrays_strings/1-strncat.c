#include "main.h"
/**
 * _strncat - concatenate two strings with n letters from second string.
 * @dest: destination string.
 * @src: source string.
 * @n: number of letters.
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_end = 0;
	int src_iterator = 0;

	while (*(dest + dest_end) != '\0')
		dest_end++;
	while (n--)
	{
		*(dest + dest_end + src_iterator) = *(src + src_iterator);
		src_iterator++;
	}
	if (*(dest + dest_end + src_iterator - 1) != '\0')
		*(dest + dest_end + src_iterator) = '\0';
	return (dest);
}
