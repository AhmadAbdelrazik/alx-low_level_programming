#include "main.h"
/**
 * more_numbers - print the numbers from 0 to 14 ten times.
 *
 * Return: Void.
 */
void more_numbers(void)
{
	int a;
	int b;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (a = 0; a < 10; a++)
	{
		_putchar('0' + a);
	}
	for(b = 0; b < 5; b++)
	{
		_putchar('1');
		_putchar('0' + b);
	}
		_putchar('\n');
	}
}
