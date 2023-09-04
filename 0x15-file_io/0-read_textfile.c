#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - fuction to read a textfilr and print to stdout
 * @filename: pointer to file to be read
 * @letters: letters to read and print
 * Return: Number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t writ;
	ssize_t fileDesc;
	ssize_t t;
	char *buffer;

	fileDesc = open(filename, O_RDONLY);
	if (fileDesc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fileDesc, buffer, letters);
	writ = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fileDesc);
	return(writ);
}


