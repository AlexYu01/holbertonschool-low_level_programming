#include <stdio.h>

/**
 * main - Prints all two digit combinations but not the inverses of the lowest
 * combination in ascending order.
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int i = 48;
	int j = 49;

	while (i < 58)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		j = i + 2;
		i++;
	}

	putchar(10);
	return (0);
}
