#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string.
 *
 * Return: a pointer to a the allocated space.
 */
char *_strdup(char *str)
{
	unsigned int size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		str++;
	}
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	do {
		ptr[size] = str[size];
	} while (size--);
	return (ptr);
}
