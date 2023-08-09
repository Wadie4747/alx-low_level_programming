#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its content
 * to the standard output.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to be read.
 *
 * Return: wr, The actual number of bytes read and printed on success,
 * or 0 on failure or if the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t wr;
	ssize_t rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	free(buf);
	close(fd);
	return (wr);
}
