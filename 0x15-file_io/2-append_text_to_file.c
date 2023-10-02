#include "main.h"

/**
 * append_text_to_file - This function appensd a text to end of file
 * @filename: This points to name of file
 * @text_content: String to add to end of file
 * Return: --1 if it fails or does not exist, else -1
 */

int append_text_to_file(const char *filename, char *text_content)

{

	int x, y, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, length);

	if (x == -1 || y == -1)
		return (-1);
	close(x);

	return (1);

}
