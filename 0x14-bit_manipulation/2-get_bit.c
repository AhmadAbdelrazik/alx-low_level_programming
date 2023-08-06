#include "main.h"

/**
 * get_bit - return the value of the bit in the given index
 * @n: the binary number.
 * @index: the bit number.
 *
 * Return: The content of the given bit. Return -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	bit = n & (1 << index);
	if (bit)
		return (1);
	else
		return (0);
}
