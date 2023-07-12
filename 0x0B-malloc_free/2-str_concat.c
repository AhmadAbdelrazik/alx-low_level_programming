#include "main.h"
/**
 * _strlen - calculate string length.
 * @str: the string.
 *
 * Return: the string length.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * str_concat - concatenate two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: return pointer to the newly allocated memory
 * return NULL at failure.
 */
char *str_concat(char *s1, char *s2)
{
	int count1, count2, i;
	char *ptr;

	if (s1 == NULL)
	{
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		*s2 = '\0';
	}
	count1 = _strlen(s1);
	count2 = _strlen(s2);
	ptr = malloc(count1 + count2 + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= count1 + count2; i++)
	{
	if (i < count1)
	{
		ptr[i] = s1[i];
	}
	else
	{
		ptr[i] = s2[i - count1];
	}
	}
	return (ptr);
}
