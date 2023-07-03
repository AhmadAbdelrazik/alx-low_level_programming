#include "main.h"
/**
 * _strchr - locate the first occurence of char c in memory area s.
 * @s: String.
 * @c: the character.
 *
 * Return: pointer to the first occurence of c. or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
		return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
