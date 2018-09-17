#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The integer passed
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n++);
			if (n - 1 < 98)
			{
				printf(", ");
			}
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n--);
			if (n + 1 > 98)
			{
				printf(", ");
			}

		}
	}
	else
	{
		printf("%d", n);
	}
	putchar('\n');
}
