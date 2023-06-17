#include <stdio.h>

/**
 * main - Entry Function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8' || b != '9')
				{
				putchar(',');
				putchar(' ');
				}
			}
			b++;
		}
		b = '0';
		a++;
	}
	putchar('\n');
	return (0);
}
