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
	FILE *fp;
	int c;
	size_t count = 0;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while ((c = fgetc(fp)) != EOF && count < letters)
	{
		putchar(c);
		count++;
	}
	
	fclose(fp);
	return (count);
}
