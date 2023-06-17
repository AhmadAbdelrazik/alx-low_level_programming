#include <stdio.h>

/**
 * main - Entry Function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	
	a = 0;
	while(a < 10)
		printf("%d", a++);
	putchar('\n');
	return (0);
}
