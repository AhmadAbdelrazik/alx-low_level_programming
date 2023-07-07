#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the main string.
 * @accept: The accepted string.
 *
 * Return: Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
		found = 1;
		number++;
		break;
	}
	}
	if (!found)
		break;
	}
	return (number);
}
