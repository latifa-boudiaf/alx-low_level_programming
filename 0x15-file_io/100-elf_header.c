#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>

#define BUFFER_SIZE 64

/**
 * print_error: prints the error message.
 * @msg: the message to print.
 * Return: void
 */

void print_error(const char *msg)
{
	const char *ptr = msg;
	while (*ptr != '\0')
		ptr++;
	write(STDERR_FILENO, msg, ptr - msg);
}

/**
 * print_elf_header_info - 
 * @elf_header: 
 * Return: void
 */

void print_elf_header_info(const Elf64_Ehdr *elf_header)
{
	int i;
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", elf_header->e_ident[i]);

	printf("\nClass: %s\n", (elf_header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("Data: %s\n", (elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", elf_header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);

	printf("Type:    %d\n", elf_header->e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)elf_header->e_entry);
}

/**
 * main- entry point
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: int
 */

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename\n");
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Error: Unable to open the file\n");
		return (98);
	}

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error("Error: Unable to read ELF header\n");
		close(fd);
		return (98);
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Error: Not an ELF file\n");
		close(fd);
		return (98);
	}

	lseek(fd, 0, SEEK_SET);

	print_elf_header_info(&elf_header);
	close(fd);
	return (0);
}
