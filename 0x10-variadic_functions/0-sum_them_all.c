#include "variadic_functions.h"
/**
 * sum_them_all - sums all the numbers.
 * @n: number of arguments.
 *
 * Return: the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, x;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
