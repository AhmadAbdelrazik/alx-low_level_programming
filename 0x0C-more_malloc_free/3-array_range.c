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
	int *p, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
