#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - creates a file.
 * @filename: the name of the file.
 * @text_content: the content of the file.
 * Return: 1 in success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int length, inlen;
	char *ptr;

	length = 0;
	inlen = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{

		for (inlen = 0, ptr = text_content; *ptr; ptr++)
			inlen++;
		length = write(fd, text_content, inlen);
	}

	if (close(fd) == -1 || inlen != length)
		return (-1);
	return (1);
}
