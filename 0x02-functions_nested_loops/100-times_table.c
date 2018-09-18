#include "holberton.h"

/**
 * print_times_table - Prints multiplication table starting from 0 to 9
 * @n: later
 *
 * Return: void
 */

void print_times_table(int n)
{
	int vert;
	int horz;
	int prod;
	int digit1;
	int digit2;
	int digit3;

	if (n <= 15 && n >= 0)
	{
		for (vert = 0; vert <= n; vert++)
		{
			for (horz = 0; horz <= n; horz++)
			{
				prod = vert * horz;
				digit1 = prod / 100;
				digit2 = (prod / 10) % 10;
				digit3 = prod % 10;
				if (horz != 0)
				{
					_putchar(' ');
					if (digit1 != 0)
						_putchar(digit1 + '0');
					else
						_putchar(' ');
					if (digit1 != 0)
						_putchar(digit2 + '0');
					else if (digit2 != 0)
						_putchar(digit2 + '0');
					else
						_putchar(' ');
				}
				_putchar(digit3 + '0');
				if (horz != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
