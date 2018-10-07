#include <stdio.h>


/**
  * main - Prints the name of the program.
  * @argc: The number of arguments.
  * @argv: An array of pointers to strings containing the arguments.
  *
  * Return: 0 upon success.
  */

int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", *argv);

	return (0);
}
