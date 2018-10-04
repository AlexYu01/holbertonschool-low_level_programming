#include <stdio.h>

/**
  * main - Prints all arguments it receives.
  * @argc: The number of arguments.
  * @argv: An array of pointers to strings containing the arguments.
  *
  * Return: 0 upon success.
  */

int main(int argc, char **argv)
{
	int index;

	for (index = 0; index < argc; index++)
		printf("%s\n", argv[index]);

	return (0);
}
