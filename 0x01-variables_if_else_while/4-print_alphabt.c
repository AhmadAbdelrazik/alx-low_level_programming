#include <stdio.h>

/**
 * main - Entry Function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
			continue;
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
