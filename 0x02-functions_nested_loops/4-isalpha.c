#include "main.h"
/**
 * _isalpha - chech whether the character belongs to the alphabet.
 * @c: the character to check
 *
 * Return: return 1 if it belongs to the alphabet. otherwise return 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
