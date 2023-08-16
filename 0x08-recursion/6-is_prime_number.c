#include "main.h"

int is_divisable(int n, int val);

/**
 * is_prime_number - check if number is prime.
 * @n: the number.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_divisable(n, 2));
}
/**
 * is_divisable - check if number is divisable and has no remainder.
 * @n: the number.
 * @val: the divisor
 *
 * Return: 1 at success, 0 at failure.
 */
int is_divisable(int n, int val)
{
	if (n < 2)
		return (0);
	if (val * val > n)
		return (1);

	if (n % val)
		return (is_divisable(n, val + 1));
	else
		return (0);
}

