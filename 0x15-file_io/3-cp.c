#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, or the corresponding error code on failure.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		exit(dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n") || 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit(dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					argv[1]) || 98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
		exit(dprintf(STDERR_FILENO, "Error: Can't write to file %s\n",
					argv[2]) || (close(fd_from), 99));
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			exit(dprintf(STDERR_FILENO, "Error: Can't write to file %s\n",
						argv[2]) || (close(fd_from), close(fd_to), 99));
	}
	if (bytes_read == -1)
		exit(dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					argv[1]) || (close(fd_from), close(fd_to), 98));
	exit((close(fd_from) == -1 &&
				(dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
						fd_from) || 100)) ||
			(close(fd_to) == -1 && (dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
							fd_to) || 100)));
	return (0);
}
