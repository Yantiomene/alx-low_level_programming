#include "main.h"

/**
 * check_read - check if the op of reading file is ok
 * @num_read: number of bytes readed
 * @argv: arguments list
 *
 */
void check_read(int num_read, char *argv[])
{
	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read the file %s\n", argv[1]);
		exit(98);
	}
}

/**
 * read_header - read ELF header into a structure
 * @fd: file descriptor
 * @elf: pointer to the elf_t which will contain the data
 * @argv: arguments list
 *
 */
void read_header(int fd, elf_t *elf, char *argv[])
{
	int num_read;

	num_read = READ(fd, elf->ident);
	check_read(num_read, argv);
	num_read = READ(fd, elf->type);
	check_read(num_read, argv);
	num_read = READ(fd, elf->machine);
	check_read(num_read, argv);
	num_read = READ(fd, elf->version);
	check_read(num_read, argv);
	if (elf->ident[4] == 1)
	{
		num_read = READ(fd, elf->entry32);
		check_read(num_read, argv);
	}
	else if (elf->ident[4] == 2)
	{
		num_read = READ(fd, elf->entry64);
		check_read(num_read, argv);
	}
}

/**
 * is_elf - check if a file is an ELF
 * @buf: pointer to the magic number
 *
 * Return: 1 (ELF), 0(If not)
 */
int is_elf(u_int8_t *buf)
{
	if (buf[0] == 0x7F && buf[1] == 'E' && buf[2] == 'L' && buf[3] == 'F')
		return (1);
	return (0);
}

/**
 * print_magic - prints the magic number of an ELF
 * @buf: pointer to the magic number
 *
 */
void print_magic(u_int8_t *buf)
{
	int i;

	printf("  Magic:  ");
	for (i = 0; i < 16; i++)
		printf(" %02x", buf[i]);
	printf("\n");
}

/**
 * print_class - prints the class
 * @buf: pointer to the magic number
 *
 */
void print_class(u_int8_t *buf)
{
	if (buf[4] == 1)
		printf("  Class:                             ELF32\n");
	else if (buf[4] == 2)
		printf("  Class:                             ELF64\n");
}

/**
 * print_data - prints the endianness type
 * @buf: pointer tot the magic number
 *
 */
void print_data(u_int8_t *buf)
{
	printf("  Data:                              2's complement");
	if (buf[5] == 1)
		printf(", little endian\n");
	else if (buf[5] == 2)
		printf(", big endian\n");
}

/**
 * print_version - prints the current version
 * @buf: pointer to the magic number
 *
 */
void print_version(u_int8_t *buf)
{
	printf("  Version:                           %d", buf[6]);
	if (buf[6] == EV_CURRENT)
		printf(" (current)");
	printf("\n");
}

/**
 * print_abi - prints os/abi and abi_version
 * @buf: pointer to the magic number
 *
 */
void print_abi(u_int8_t *buf)
{
	printf("  OS/ABI:                            ");
	switch (buf[7])
	{
	case 0:
		printf("UNIX - System V\n");
		break;
	case 2:
		printf("UNIX - NetBSD\n");
		break;
	case 6:
		printf("UNIX - Solaris\n");
		break;
	default:
		printf("<unkown: %x>\n", buf[7]);
		break;
	}
	printf("  ABI Version:                       %d\n", buf[8]);
}

/**
 * print_type - prints types
 * @type: type name
 *
 */
void print_type(u_int16_t type)
{
	printf("  Type:                              ");
	switch (type)
	{
	case 0:
		printf("NONE (No file type)\n");
		break;
	case 1:
		printf("REL (Relocatable file)\n");
		break;
	case 2:
		printf("EXEC (Executable file)\n");
		break;
	case 3:
		printf("DYN (Shared object file)\n");
		break;
	case 4:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", type);
		break;
	}
}

/**
 * print_entry - prints the entry point address
 * @elf: pointer to an elf_t
 *
 */
void print_entry(elf_t *elf)
{
	printf("  Entry point address:               0x");
	if (elf->ident[4] == 1)
	{
		printf("%x", elf->entry32);
	}
	else if (elf->ident[4] == 2)
	{
		printf("%lx", elf->entry64);
	}
	printf("\n");
}

/**
 * print_header - prints header of an elf
 * @elf: pointer to an elf_t
 *
 */
void print_header(elf_t *elf)
{
	printf("ELF Header:\n");
	print_magic(elf->ident);
	print_class(elf->ident);
	print_data(elf->ident);
	print_version(elf->ident);
	print_abi(elf->ident);
	print_type(elf->type);
	print_entry(elf);
}

/**
 * main - displays information contained in the ELF header of an ELF
 * @argc: number of arguments
 * @argv: arguments list
 *
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	/*unsigned char buf[32];*/
	elf_t elf;
	int fd, fd_close;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: elf_reader elf_filename");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open the file %s\n", argv[1]);
		exit(98);
	}
	read_header(fd, &elf, argv);
	if (!is_elf(elf.ident))
	{
		dprintf(STDERR_FILENO, "Error: The file %s is not an ELF\n", argv[1]);
		exit(98);
	}
	print_header(&elf);
	fd_close = close(fd);
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close the fd %d\n", fd);
		exit(98);
	}
	return (0);
}
