#include "main.h"

/**
 * count - count characters in string.
 * @s: the string
 *
 * Return: number of characters.
 */
int count(char *s);
{
	int n = 0;
	if (*s != '\0')
		n += count(s + 1) + 1;
		
	return (n);
}
/**
 * is_palindrome - check if string is palindrome.
 * @s: the string.
 * @start: the start index.
 * @end: the end index.
 * @mod: the modulus.
 *
 * Return: 1 if palindrome, 0 if not.
*/

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);

	if (s[start] == s[end])
		return (check(s, start + 1, end - 1, mod));
	else
		return (0);
}

/**
 * is_palindrome - check if string is palindrome.
 * @s: the string.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = count(s);
	return (check(s, 0, length - 1, length % 2));
}
