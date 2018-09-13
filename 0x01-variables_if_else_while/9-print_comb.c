#include <stdio.h>

/**
 * main - Prints all single digit numbers in ascending order with a comma and
 * space in between them using ASCII code.
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar(10);
	return (0);
}
