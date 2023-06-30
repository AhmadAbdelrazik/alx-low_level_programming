#include "main.h"
/**
 * string_toupper - convert each lowercase letter to uppercase.
 * @str: string.
 *
 * Return: pointer to the string.
 */
char *string_toupper(char *str)
{
	int toupper = 'a' - 'A';
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= toupper;
	}
	}
	return (str);
}
