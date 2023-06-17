#include <stdio.h>

/**
 * main - Entry Function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 47;
	while (++a < 58)
		putchar(a);
	putchar('\n');
	return (0);
}
