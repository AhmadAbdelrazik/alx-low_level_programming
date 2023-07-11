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
	char *ptr;
	int i;

	ptr = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	if (size)
	{
		return (ptr);
	}
	else
		return (NULL);
}
