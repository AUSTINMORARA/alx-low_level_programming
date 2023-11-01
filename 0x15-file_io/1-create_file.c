#include "main.h"

/**
 * create_file - Function creates a file.
 * @filename: file to be created.
 * @text_context: NULL terminated string to write in the new file.
 *
 * Return: 1 on sucess and -1 on failure.
 */

int create_file(const char *filename, char *text_context)
{
	int i;
	ssize_t file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_context == NULL)
		text_context = "";

	while (text_context[i])
	{
		i++;
	}
	write(file, text_context, i);
	close(file);
	return (1);
}
