#include <stdio.h>

/**
 * main - Entry Function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	a = '0';
	while (a <= '9')
	{
		putchar(a++);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
