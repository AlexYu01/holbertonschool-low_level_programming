#include <stdio.h>

/**
 * main - print alphabets in lower case followed by newline
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
