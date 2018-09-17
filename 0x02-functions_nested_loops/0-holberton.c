#include <stdio.h>

/**
 * main - Prints Holberton followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	char *word;

	word = "Holberton\n";
	while (*word)
	{
		putchar(*word);
		word++;
	}
	return (0);
}

