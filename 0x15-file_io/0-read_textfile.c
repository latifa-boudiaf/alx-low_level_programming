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
	int i;
	size_t letters_written = 0;

	if (filename == NULL)
		return (0);

	fd = fopen(filename, "r");
	if (fd == NULL)
		return (0);

	while ((i = fgetc(fd)) != EOF && letters_written < letters)
	{
		_putchar(i);
		letters_written++;
	}

	fclose(fd);
	return (letters_written);
}
