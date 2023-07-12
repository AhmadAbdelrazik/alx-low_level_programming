#include "main.h"
/**
 * argstostr - concatenate all arguments into a string.
 * @ac: arguments count.
 * @av: arguments.
 *
 * return: pointer to the arguments, or NULL if fails.
 */
char *argstostr(int ac, char **av)
{
	int length = 0, i, j, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++);
	length += j;
	}
	str = malloc(length + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		str[k] = av[i][j];
		k++;
	}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
