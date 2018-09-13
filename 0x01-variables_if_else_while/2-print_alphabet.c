#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase using ASCII code.
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}

	putchar(10);
	return (0);
}
