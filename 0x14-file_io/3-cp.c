#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int close_file(int file_desc);
void read_error(char *file);
void write_error(char *file);

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
 * read_error - Prints read error for file being read.
 *
 * @file: name of the file being read.
 *
 * Return: void.
 */

void read_error(char *file)
{
	dprintf(2, "Error: Can't read from file %s\n", file);
}

/**
 * write_error - Prints write error and closes file being read before exiting"
 *
 * @file: name of the file being written.
 *
 * Return: void.
 */

void write_error(char *file)
{
	dprintf(2, "Error: Can't write to %s\n", file);
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
	ssize_t b_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		read_error(argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		write_error(argv[2]);
		close(file_from);
		exit(99);
	}
	do {
		b_read = read(file_from, buffer, 1024);
		if (b_read == -1)
		{
			read_error(argv[1]);
			close(file_from);
			close(file_to);
			exit(98);
		}
		b_write = write(file_to, buffer, b_read);
		if (b_write == -1)
		{
			write_error(argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
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
