#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase using ASCII code.
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}

	putchar(10);
	return (0);
}
