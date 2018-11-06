#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 *
 * @filename: The pathfile to the file to be read.
 * @letters: size_t, the amount of letters to be read and printed.
 *
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	ssize_t b_read;
	ssize_t b_write;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (0);

	b_read = read(file, buffer, letters);
	if (b_read == -1)
		return (0);

	buffer[letters] = '\0';
	close (file);

	b_write = write(1, buffer, b_read);
	free(buffer);

	/* unclear on whether or not to check written with letters */
	if (b_write == -1)
		return (0);

	return (b_write);
}
