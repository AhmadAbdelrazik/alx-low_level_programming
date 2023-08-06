#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned int.
 * @b: string b that contain the binary number.
 *
 * Return: the unsigned int number on Success, 0 at failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0, i = 0;

	if (*b == '\0')
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		a = a << 1;
		a += b[i] - '0';

		i++;
	}
	return (a);
}
