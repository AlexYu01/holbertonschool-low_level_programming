#include <stdio.h>

/**
 * main - Prints all numbers from 00 to 99 in ascending order with a comma and
 * space in between them using ASCII code.
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int i = 48;
	int j = 48;

	while (i < 58)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i != 57 || j != 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		j = 48;
		i++;
	}
	putchar(10);
	return (0);
}
