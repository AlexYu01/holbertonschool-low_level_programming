#include <stdio.h>

/**
  * main - Prints the number of arguments passed to it.
  * @argc: The number of arguments.
  * @argv: An array of pointers to strings containing the arguments.
  *
  * Return: 0 upon success.
  */

int main(int argc, char **argv)
{
	(void) argv;
	
	printf("%d\n", argc - 1);

	return (0);
}
