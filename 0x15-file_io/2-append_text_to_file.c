#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_stat;
	unsigned int it = 0;
	size_t wcount = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR, O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content[it] != '\0')
	{
		it++;
		wcount++;
	}
	write_stat = write(fd, text_content, wcount);
	if (write_stat == -1)
		return (-1);
	close(fd);
	return (1);

}
