#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number.
 *
 * Return: the natural square of n, -1 if there is no natural roots.
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	while (i * i <= n)
	{
		if (i == n)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
