#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int j = 48;
	int k = 48;
	int l = 48;
	int m = 49;

	while (j <= 57)
	{
		while (k <= 57)
		{
			while (l <= 57)
			{
				while (m <= 57)
				{
					putchar(j);
					putchar(k);
					putchar(32);
					putchar(l);
					putchar(m);
					putchar(44);
					putchar(32);
					m++;
				}
			l++;
			m = k;
			}
		k++;
		l = j;
		m = k + 1;
		}
	j++;
	k = 48;
	l = j;
	m = k + 1;
	}

	putchar(10);
	return (0);
}
