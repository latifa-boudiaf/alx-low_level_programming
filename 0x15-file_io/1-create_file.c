#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
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
	int length = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	else
	{

		for (inlen = 0, ptr = text_content; *ptr; ptr++)
			inlen++;
		length = write(file, text_content, inlen);
	}

	if (close(fd) == -1 || inlen != length)
		return (-1);
	return (1);
}
