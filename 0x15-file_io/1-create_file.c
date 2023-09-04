#include "main.h"

/**
 * create_file - This fuction creaes a file
 * @filename: Pointer to the name of the file to create
 * @text_content: the pointer to write to the file
 * Return: if function succeds 1, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fileDesc, writ, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fileDesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writ = write(fileDesc, text_content, length);
	if (fileDesc == -1 || writ == -1)
		return (-1);
	close(fileDesc);
	return (1);
}
