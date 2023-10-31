#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the POSIX.
 * @filename: name of file being read.
 * @letters: number of letters read and printed.
 *
 * Return: Number of letter read and printed on success else 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	ssize_t n;
	char *buffer;


	if (filename == NULL)
		return (0);
	buffer = malloc((letters + 1) * sizeof(char));

	if (buffer == NULL)
		return (0);

	buffer[letters] = '\0';
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	n = read(file, buffer, letters);

	write(STDOUT_FILENO, buffer, n);
	close(file);

	free(buffer);
	return (n);
}

