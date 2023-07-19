#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: the array.
 * @size: the size of array.
 * @cmp: pointer to the function that is used to compare values.
 * Return: returns the index of the first element for which
 * the cmp function does not return 0, If no element matches, return -1
 * If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, a = 1;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		a = cmp(array[i]);
		if (a)
		{
			return (i);
		}
	}
	return (-1);
}
