#include "main.h"
/**
 * _abs - return the absolute value of a function.
 * @n: the number itself to return its absolute
 *
 * Return: the Absolute of n.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
