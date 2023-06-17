#include <stdio.h>

/**
 * main - Entry Function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexas[16] = "0123456789abcdef";
	int a;

	a = 0;
	while (a < 16)
		putchar(hexas[a++]);
	putchar('\n');
	return (0);
}
