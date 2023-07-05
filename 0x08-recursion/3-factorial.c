#include "main.h"
/**
 * factorial - return the factorial of number n.
 * @n: the number.
 *
 * Return: the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
