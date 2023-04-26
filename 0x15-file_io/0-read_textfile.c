#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters to be printed or 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	char *buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	ssize_t read_bytes = read(fd, buffer, letters);

	if (read_bytes == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	ssize_t written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (read_bytes);
}
