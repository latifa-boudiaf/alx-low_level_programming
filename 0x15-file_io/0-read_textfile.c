#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads letters from a file and writes them.
 *
 * @filename: string containing the name of the file.
 * @letters: the number of letters to read from the file.
 * Return: the number of letters written or 0 in failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int bytes_read, bytes_written;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);
	if (bytes_written != bytes_read)
		return (0);
	return (bytes_written);
}
