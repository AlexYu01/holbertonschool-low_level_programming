#include "holberton.h"

void times_table_helper(int digit1, int digit2);

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

	if (n < 15 && n > 0)
	{
		for (vert = 0; vert <= n; vert++)
		{
			for (horz = 0; horz <= n; horz++)
			{
				prod = vert * horz;
				digit1 = prod / 100;
				digit2 = (prod % 100) / 10;
				digit3 = (prod % 100) % 10;
				if (horz != 0)
				{
					times_table_helper(digit1, digit2);
				}
				_putchar(digit3 + '0');
				if (horz != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
/**
 * times_table_helper - Helper functions for print_times_table function.
 * Prints the needed number of spaces depending on the value of digit1
 * and digit2.
 * @digit1: First digit of the product in a number represented in three
 * digits.
 * @digit2: Second digit of the product in a number represented in three
 * digits.
 *
 * Return: void
 */
void times_table_helper(int digit1, int digit2)
{
	_putchar(' ');
	if (digit1 != 0)
	{
		_putchar(digit1 + '0');
		_putchar(digit2 + '0');
	}
	else if (digit2 != 0)
	{
		_putchar(' ');
		_putchar(digit2 + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
	}
}
