#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: path to the text file
 * @letters: number of letters to be readed
 *
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_read, num_write;
	int fd;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	num_read = read(fd, buf, letters);
	if (num_read == STDERR_FILENO)
		return (0);
	num_write = write(STDOUT_FILENO, buf, num_read);

	if (num_write != num_read)
		return (0);
	close(fd);
	free(buf);
	return (num_read);
}
