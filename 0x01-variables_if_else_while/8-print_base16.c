#include <stdio.h>

/**
 * main - Entry Function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexas[16];
	int a;

	a = 0;
	hexas = "0123456789ABCDEF";
	while (a < 16)
		putchar(hexas[a++]);
	putchar('\n');
	return (0);
}
