#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: path to the filename
 * @text_content:
 *
 * Return: 1(success), -1(failed)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num_write = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
		num_write = write(fd, text_content, strlen(text_content));
	if (num_write == -1)
		return (-1);

	close(fd);
	return (1);
}
