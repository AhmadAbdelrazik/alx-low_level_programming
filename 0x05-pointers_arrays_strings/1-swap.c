#include "main.h"
/**
 * swap_int - a function which swaps two variables values.
 * @a: The first Value.
 * @b: The second Value.
 *
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
