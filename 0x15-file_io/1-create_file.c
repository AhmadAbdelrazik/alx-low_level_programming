#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: file to be named.
 * @text_content: the content to be written in the file.
 *
 * Return: 1 at success, -1 at failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int write_stat = 0;
	int len = 0;

	if (filename == 0)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	while (text_content[len])
		len++;

	if (len)
		write_stat = write(fd, text_content, len);

	return (write_stat == len ? 1 : -1);
}
