#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: the array
 * @size: the size of array.
 * @action: the function.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
