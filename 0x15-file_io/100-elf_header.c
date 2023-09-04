#include "main.h"

/**
 * print_elf_header_info - Prints the information
 * contained in the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
}

/**
 * print_error - Prints the error message to stderr.
 * @message: The error message to be printed.
 */
void print_elf_header_info(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class: ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Unknown\n");
	}
	printf("Data: ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Unknown\n");
	}

	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		default:
			printf("Unknown\n");
	}
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %u\n", header->e_type);
	printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: The exit status code.
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		print_error(ERROR_INVALID_ARGUMENTS);
		return (1);
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error(ERROR_OPEN_FILE);
		return (98);
	}
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
	{
		print_error(ERROR_READ_HEADER);
		close(fd);
		return (98);
	}

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error(ERROR_NOT_ELF_FILE);
		close(fd);
		return (98);
	}
	print_elf_header_info(&header);
	close(fd);
	return (0);
}
