#include "main.h"
#include "stdio.h"
/**
 * print_array - print the first n elements of array.
 * @a: the array.
 * @n: the number of elements.
 *
 * Return: Void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
	_putchar('\n');
}
