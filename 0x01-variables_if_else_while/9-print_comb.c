#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
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
