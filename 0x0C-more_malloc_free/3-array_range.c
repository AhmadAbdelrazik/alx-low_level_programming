#include "main.h"
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum range.
 * @max: maximum range.
 *
 * Return: the pointer or NULL at failure.
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(max - min + 1);
	for (i = 0; i < max - min + 1; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
