#include "main.h"
/**
 * _isdigit - check whether the character is a digit or not.
 * @c: the character.
 *
 * Return: 1 if it's a digit, otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
