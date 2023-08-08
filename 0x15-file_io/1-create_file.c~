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
	int file, write_status, words = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC , S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;

		write_status = write(file, text_content, words);
		if (write_status)
			return (-1);
	}

	close(file);
	return (1);
}
