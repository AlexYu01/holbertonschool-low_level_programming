#include <stdio.h>

/**
 * main - print alphabets in lower case followed by newline
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}

	putchar(10);
	return (0);
}
