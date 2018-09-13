#include <stdio.h>

/**
 * main - print alphabets except for 'q' and 'e' in lower case followed by
 * newline
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}

	putchar(10);
	return (0);
}
