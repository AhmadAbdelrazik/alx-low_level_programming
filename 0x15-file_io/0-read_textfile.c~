#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file name to print from.
 * @letters: amount of letters to print.
 *
 * Return: return the actual number of letters it could read and print.
 * at failure print 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, read_check;
	ssize_t wcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	read_check = read(file, buffer, letters);
	wcount = write(STDOUT_FILENO, buffer, read_check);

	if (wcount == -1 || read_check != wcount)
		return (0);

	free(buffer);

	return (wcount);
}
