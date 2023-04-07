#include "main.h"

/**
 * is_valid_fo - check if a file operation: open, read or write is correct
 * @fd_from: file descriptor for input file
 * @fd_to: file descriptor for output file
 * @argv: arguments list
 *
 */
void is_valid_fo(int fd_from, int fd_to, char *argv[])
{
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to", argv[2]);
		exit(99);
	}
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file ", argv[1]);
		exit(98);
	}
}

/**
 * is_close - check if a fd close well
 * @fd_close: fd of close system call
 * @fd: fd to be closed
 *
 */
void is_close(int fd_close, int fd)
{
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "%s %d\n", "Error: Can't close fd ", fd);
		exit(100);
	}
}

/**
 * main - copy the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int fd_to, fd_from, fd_close;
	int num_read = 1024, num_write;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	fd_from = open(argv[1], O_RDONLY);
	is_valid_fo(fd_from, fd_to, argv);

	do {
		num_read = read(fd_from, buf, 1024);
		if (num_read == -1)
		{
			is_valid_fo(num_read, 0, argv);
		}
		num_write = write(fd_to, buf, num_read);
		if (num_write == -1)
		{
			is_valid_fo(0, -1, argv);
		}
	} while (num_read == 1024);
	fd_close = close(fd_from);
	is_close(fd_close, fd_from);
	fd_close = close(fd_to);
	is_close(fd_close, fd_to);

	return (0);
}
