#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int close_file(int file_desc);

/**
 * close_file - Closes a file, and checks if the close was successful.
 *
 * @file_desc: File descriptor value.
 *
 * Return: 1 if successful, -1 if close failed.
 */

int close_file(int file_desc)
{
	if (close(file_desc) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_desc);
		return (-1);
	}
	return (1);
}
/**
 * main - Copies the content of a file to another file.
 *
 * @argc: The number of arguments passed to main.
 * @argv: 2D array of pointers to the arguments passed.
 *
 * Return: tbc.
 */

int main(int argc, char **argv)
{
	int file_to;
	int file_from;
	ssize_t b_read;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close_file(file_from);
		exit(99);
	}

	do {
		b_read = read(file_from, buffer, 1024);
		write(file_to, buffer, b_read);
	} while (b_read >= 1024);

	if (close_file(file_from) == -1)
		exit(100);
	if (close_file(file_to) == -1)
	{
		close_file(file_from);
	exit(100);
	}
	return (0);
}
