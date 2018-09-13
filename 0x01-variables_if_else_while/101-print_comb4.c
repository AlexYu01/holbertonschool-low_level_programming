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
	int j = 49;
	int k = 50;

	while (i < 58)
	{
		while (j < 58)
		{
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			k = j + 2;
			j++;
		}
		j = i + 1;
		i++;
	}

	putchar(10);
	return (0);
}
