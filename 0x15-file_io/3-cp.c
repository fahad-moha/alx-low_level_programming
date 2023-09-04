#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include "main.h"

#define BUFFER_SIZE 4096

/**
 * print_error - Prints an error message to the POSIX standard error.
 * @message: The error message to print.
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
}

/**
 * copy_file - Copies the contents of the source file to the destination file.
 * @source: The path of the source file.
 * @destination: The path of the destination file.
 *
 * Return: 0 on success, or the corresponding error code on failure.
 */
int copy_file(const char *source, const char *destination)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	struct stat source_stat;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd_from = open(source, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s (%s)\n",
				source, strerror(errno));
		return (1);
	}
	if (fstat(fd_from, &source_stat) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't retrieve file metadata for %s (%s)\n",
				source, strerror(errno));
		close(fd_from);
		return (1);
	}
	if (S_ISLNK(source_stat.st_mode))
	{
		char symlink_target[PATH_MAX];
		ssize_t symlink_len = readlink(source, symlink_target,
				sizeof(symlink_target) - 1);

		if (symlink_len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Failed to read symbolic link %s (%s)\n",
					source, strerror(errno));
			close(fd_from);
			return (1);
		}
		symlink_target[symlink_len] = '\0';
		if (symlink(symlink_target, destination) == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Failed to create symbolic link from %s to %s (%s)\n",
					source, destination, strerror(errno));
			close(fd_from);
			return (1);
		}
		close(fd_from);
		return (0);
	}

	fd_to = open(destination, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s (%s)\n",
				destination, strerror(errno));
		close(fd_from);
		return (1);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Failed to write to file %s (%s)\n",
					destination, strerror(errno));
			close(fd_from);
			close(fd_to);
			return (1);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Failed to read from file %s (%s)\n",
				source, strerror(errno));
		close(fd_from);
		close(fd_to);
		return (1);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor for %s (%s)\n",
				source, strerror(errno));
		return (1);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor for %s (%s)\n",
				destination, strerror(errno));
		return (1);
	}
	if (chmod(destination, source_stat.st_mode) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't set permissions for file %s (%s)\n",
				destination, strerror(errno));
		return (1);
	}
	return (0);
}


int main(int argc, char *argv[])
{
	const char *source;
	const char *destination;
	int result;

	if (argc != 3)
	{
		print_error("Error: Invalid number of arguments. Usage:
				cp <source> <destination>");
		return (1);
	}
	source = argv[1];
	destination = argv[2];
	result = copy_file(source, destination);
	if (result != 0)
	{
		print_error("Error: Failed to copy the file.");
		return (result);
	}
	return (0);
}
