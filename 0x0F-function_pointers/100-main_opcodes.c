#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a given memory address.
 * @start_address: The starting memory address to print opcodes from.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(unsigned char *start_address, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", start_address[i]);
	}
	printf("\n");
}

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_ptr = (unsigned char *)main;

	print_opcodes(main_ptr, num_bytes);
	return (0);
}
