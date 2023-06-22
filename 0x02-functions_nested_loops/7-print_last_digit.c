#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number required to print its last digit.
 *
 * Return: the last digit of a number.
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
		digit *= -1;
	_putchar('0' + digit);
	return (digit);
}
