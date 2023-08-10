#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_stat;
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
	if (write_stat == -1)
		return (-1);
	else
		return (1);

}
