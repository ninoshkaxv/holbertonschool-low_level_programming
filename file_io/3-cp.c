#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void close_file(int fd);

/**
 * create_buffer - Allocates buffer_size bytes for a buffer.
 * @buffer_size: The size of the buffer to be created.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(size_t buffer_size)
{
	char *buffer = malloc(buffer_size);

	if (buffer == NULL)
	{
		perror("Error: Can't allocate buffer");
		exit(EXIT_FAILURE);
	}

	return buffer;
}

/**
 * close_file - Closes file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		perror("Error: Can't close file descriptor");
		exit(EXIT_FAILURE);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, or an exit code on failure.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	buffer = create_buffer(BUFFER_SIZE);

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		perror("Error: Can't open file for reading");
		free(buffer);
		exit(EXIT_FAILURE);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		perror("Error: Can't open or create file for writing");
		close_file(from);
		free(buffer);
		exit(EXIT_FAILURE);
	}

	do
	{
		bytes_read = read(from, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			perror("Error: Can't read from file");
			close_file(from);
			close_file(to);
			free(buffer);
			exit(EXIT_FAILURE);
		}

		bytes_written = write(to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			perror("Error: Can't write to file");
			close_file(from);
			close_file(to);
			free(buffer);
			exit(EXIT_FAILURE);
		}

	} while (bytes_read > 0);

	close_file(from);
	close_file(to);
	free(buffer);

	return EXIT_SUCCESS;
}

