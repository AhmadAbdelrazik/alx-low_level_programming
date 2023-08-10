#include "main.h"

/**
 * append_text_to_file - add text to the end of the file.
 * @filename: the file name.
 * @text_content: the text to be appended.
 *
 * Return: 1 at success, -1 at failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_stat = 0;
	int len = 0;

	if (!filename)
		return (0);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	while (text_content[len])
		len++;
	if (len)
	{
		write_stat = write(fd, text_content, len);
	}
	close(fd);
	if (write_stat == -1)
		return (-1);
	else
		return (1);

}
