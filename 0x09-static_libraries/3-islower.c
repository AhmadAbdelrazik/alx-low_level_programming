#include "main.h"
/**
 * _islower - determine if a letter is lowercase or not.
 * @c: The character to check
 *
 * Return: 1 if lowercase, otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
