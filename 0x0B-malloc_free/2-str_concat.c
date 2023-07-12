#include "main.h"
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
	unsigned int count1 = 0, count2 = 0;
	char *ptr;

	if (s1 == NULL)
	{
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		*s2 = '\0';
	}
	while (s1[count1] != '\0')
	{
		count1++;
	}
	while (s2[count2] != '\0')
	{
		count2++;
	}
	ptr = (char *)malloc(count1 + count2 + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	do {
		ptr[count1 + count2] = s2[count2];
	} while (count2--);
	while (count1--)
	{
		ptr[count1] = s1[count1];
	}
	ptr[count1 + count2] = '\n';
	return (ptr);
}
