#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed by s
 * with the constant byte b.
 * @s: memory area pointer.
 * @b: the constant byte.
 * @n: number of bytes.
 *
 * Return: a pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
