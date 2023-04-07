#include "main.h"

/**
 * create_file - creates a file
 * @filename: path to the file
 * @text_content: string to wrtie in the wrtie
 *
 * Return: 1(success), -1(failed)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num_write = 0, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == STDERR_FILENO)
		return (-1);
	if (!text_content)
		text_content = "";
	for (len = 0; text_content[len]; len++)
		;
	num_write = write(fd, text_content, len);
	if (num_write == STDERR_FILENO)
		return (-1);
	close(fd);
	return (1);
}
