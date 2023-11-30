#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads letters from a file and writes them.
 *
 * @filename: string containing the name of the file.
 * @letters: the number of letters to read from the file.
 * Return: the number of letters written or 0 in failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	fd = fopen(filename, "r");
	if (fd == NULL)
		return (0);

	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		fclose(fd);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		fclose(fd);
		free(buffer);
		return (0);
	}

	fclose(fd);
	free(buffer);
	return (bytes_written);
}
