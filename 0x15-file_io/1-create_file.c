#include "main.h"

/**
 * create_file - Function creates a file.
 * @filename: file to be created.
 * @text_context: NULL terminated string to write in the new file.
 *
 * Return: 1 on sucess and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(f, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(f);

	return (1);
}
