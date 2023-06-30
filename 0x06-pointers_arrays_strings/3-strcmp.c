#include "main.h"
/**
 * _strcmp - compare two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: 0 if equal, negative number if s1 smaller than s2,
 * positive number if s1 larger than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;
	
	while (!diff)
	{
		diff = s1[i] - s2[i];
		if(s1[i] == '\0')
			break;
		i++;
	}
	return (diff);
}
