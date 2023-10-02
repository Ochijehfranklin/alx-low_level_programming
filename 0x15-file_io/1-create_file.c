#include "main.h"

/**
 * create_file - This function creates a file
 * @filename: this points to name of file created
 * @text_content: this points tp string to write to file
 * Return: if function fails, --1. else -1
 */

int create_file(const char *filename, char *text_content)

{
	int fdesc, x, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)

	{

		for (length = 0; text_content[length];)

			length++;

	}

	fdesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	x = write(fdesc, text_content, length);

	if (fdesc == -1 || x == -1)
		return (-1);

	close(fdesc);
	return (1);
}


