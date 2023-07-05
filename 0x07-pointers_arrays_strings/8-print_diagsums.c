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
	int i;
	int j;
	long long d1 = 0;
	long long d2 = 0;

	for (i = 0 && j = size - 1; i < size; i++ && j--)
	{
		d1 += a[i][i];
		d2 += a[i][j];
	}
	printf("%lld, %lld\n", d1, d2);
}
