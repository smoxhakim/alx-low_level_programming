#include "main.h"

/**
 * create_file - create file and write content
 * @filename: the pointer
 * @text_content: pointer to string
 * Return: If the function fails - -1, else - 1
 * owned by: SmoxHakim
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, len);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
