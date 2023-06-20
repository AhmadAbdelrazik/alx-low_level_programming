#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - print the small letters alphabet and then make a new line
 *
 * Return: Void return nothing.
 */
void print_alphabet(void)
{
	int letter;
	
	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter++);
	}
	_putchar('\n');
}
