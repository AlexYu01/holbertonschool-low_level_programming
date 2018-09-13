#include <stdio.h>

/**
 * main - Prints alphabets in reverse in lowercase using ASCII code.
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
