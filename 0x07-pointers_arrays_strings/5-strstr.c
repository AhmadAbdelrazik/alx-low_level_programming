#include "main.h"
/**
 * _strstr - function that return the first occurence of a string.
 * @haystack: the main string.
 * @needle: the substring to be found.
 *
 * Return: pointer to the beginning of the located string.
 * or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
	while (needle[j] == '\0' || needle[j] == haystack[i + j])
	{
	if (needle[j] == '\0')
		return (i);
	}
		break;
	}
	}
	return (NULL);
}
