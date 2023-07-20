#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints the following strings.
 * @separator: the separator between strings.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *holder;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n - 1; i++)
	{
		holder = va_arg(args, char *);
		if (holder == NULL)
			holder = "(nil)";
		printf("%s%s", holder, separator);
	}
	holder = va_arg(args, char *);
	if (holder == NULL)
		holder = "(nil)";
	printf("%s\n", holder);
}
