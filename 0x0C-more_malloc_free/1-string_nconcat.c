#include "main.h"
/**
 * string_nconcat - concatenate two strings, concatenate the first string
 * with the first n characters from the second string.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 *
 * Return: pointer that point to the newly allocated string,
 * at failure return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i;
	char *ptr;

	/* Dealing with strings if NULL is passed */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* Calculate the length of the strings */
	for (size1 = 0; s1[size1] != '\0'; size1++)
	;
	for (size2 = 0; s2[size2] != '\0'; size2++)
	;
	/* Allocating memory*/
	ptr = malloc(size1 + (n > size2 ? size2 : n) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* Copying the strings*/
	for (i = 0; i <= size1 + (n > size2 ? size2 : n); i++)
	{
	if (i < size1)
		ptr[i] = s1[i];
	else
		ptr[i] = s2[i - size1];
	}
	ptr[i] = '\0';
	return (ptr);
}
