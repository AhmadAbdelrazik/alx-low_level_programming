#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: the size of the array.
 * @c: the character.
 *
 * Return: a pointer to the array or NULL if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr = malloc(size);

	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
