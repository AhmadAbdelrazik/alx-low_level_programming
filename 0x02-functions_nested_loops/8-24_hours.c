#include "main.h"
/**
 * jack_bauer - prints every minute in the day of jack bauer.
 *
 * Return: Void.
 */
void jack_bauer(void)
{
	int min1 = 0;
	int min2 = 0;
	int hr1 = 0;
	int hr2 = 0;

	while (hr2 < 3)
	{
	while (hr1 < 10)
	{
	while (min2 < 6)
	{
	while (min1 < 10)
	{
		_putchar('0' + hr2);
		_putchar('0' + hr1);
		_putchar(':');
		_putchar('0' + min2);
		_putchar('0' + min1);
		_putchar('\n');
		min1++;
	}
	min2++;
	min1 = 0;
	}
	hr1++;
	min2 = 0;

	if (hr2 == 2 && hr1 == 4)
		break;
	}
	hr2++;
	hr1 = 0;
	}
}
