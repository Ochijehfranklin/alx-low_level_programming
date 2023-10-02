#include "main.h"

#include <stdlib.h>

/**
 * read_textfile - tO read file printed to stdout
 * @filename: the text file that is being read
 * @letters: number of letters to be read
 * Return: number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)

{

	char *buffer;

	ssize_t fesc;

	ssize_t x;

	ssize_t y;

	fdesc = open(filename, O_RDONLY);

	if (fdesc == -1)

		return (0);

	buffer = malloc(sizeof(char) * letters);

	y = read(fd, buf, letters);

	x = write(STDOUT_FILENO, buf, t);

	free(buffer);

	close(fdesc);

	return (x);

}
