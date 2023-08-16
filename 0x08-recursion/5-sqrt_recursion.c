#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number.
 *
 * Return: the natural square of n, -1 if there is no natural roots.
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root.
 * @n: the main number.
 * @val: the potential root.
 *
 * Return: the natural square of n, -1 if not found.
 */
int square(int n, int val)
{
	if(val * val == n)
		return(val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);

}
