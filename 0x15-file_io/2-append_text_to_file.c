#include "main.h"

/**
 * append_text_to_file - adds text to a file
 * @filename: the pointer
 * @text_content: pointer to a string
 * Return: If the function fails - -1 else - 1
 * owned by: SmoxHakim
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, len);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
