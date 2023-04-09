#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define READ(fd, var) read(fd, &(var), sizeof(var))

/**
 * struct elf_header - structure of Header of an ELF
 * @ident: magic number
 * @type: type name
 * @machine: machine name
 * @version: version
 * @entry32: entry for 32 bits machine
 * @entry64: entry for 64 bits machine
 */
typedef struct elf_header
{
	u_int8_t ident[16];
	u_int16_t type;
	u_int16_t machine;
	u_int32_t version;
	u_int32_t entry32;
	u_int64_t entry64;
} elf_t;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
