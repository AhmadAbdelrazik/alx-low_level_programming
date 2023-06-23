#include "main.h"
/**
 * more_numbers - print the numbers from 0 to 14 ten times.
 *
 * Return: Void.
 */
void more_numbers(void)
{
	int a;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (a = 0; a < 15; a++)
	{
	if (a >= 10)
	{
		_putchar('1');
	}
		_putchar('0' + a % 10);
	}
		_putchar('\n');
	}
}
