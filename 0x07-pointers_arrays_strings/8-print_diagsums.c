#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of each diagonal of a square matrix.
 * @a: pointer to the matrix.
 * @size: size of the matrix.
 *
 * Return: Void.
 */
void print_diagsums(int *a, int size)
{
	int i, j = size - 1, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += *(a + (i * size + i));
		d2 += *(a + (i * size + j));
		j--;
	}
	printf("%d, %d\n", d1, d2);
}
