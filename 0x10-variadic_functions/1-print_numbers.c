#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print the given numbers.
 * @separator: string to be printed between numbers.
 * @n: the number of integers.
 *
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n - 1; i++)
	{
		x = va_arg(args, int);
		printf("%d%s", x, separator);
	}
	x = va_arg(args, int);
	printf("%d\n", x);
}
