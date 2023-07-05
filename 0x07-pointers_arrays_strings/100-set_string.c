#include "main.h"
/**
 * set_string -  a function that sets the value of a pointer to a char.
 * s: a pointer to the pointer.
 * to: the new address to point to.
 * Return: Void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
