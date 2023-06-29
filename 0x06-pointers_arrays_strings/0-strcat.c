#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_end = 0;
	int src_iterator = 0;

	while (*(dest + dest_end) != '\0')
	{
		dest_end++;
	}
	
	while (*(src + src_iterator) != '\0')
	{
		*(dest + dest_end + src_iterator) = *(src + src_iterator);
		src_iterator++;
	}
	*(dest + dest_end + src_iterator) = *(src + src_iterator);
	return (dest);
}
