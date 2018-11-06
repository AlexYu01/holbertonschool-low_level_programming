#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

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
	ssize_t file_to;
	ssize_t file from;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_to = open(argv[1], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	/*
	   check file_to, if fail exit with 99 and print Error: Can't write to NAME_OF_THE_FILE



	   check for close, if fail exit with code 100 and print Error: Can't close fd FD_VALUE
	   */
