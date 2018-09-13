#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * using ASCII code.
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);
	return (0);
}
