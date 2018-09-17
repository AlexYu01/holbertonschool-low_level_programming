#include "holberton.h"

/**
 * times_table - Prints multiplication table starting from 0 to 9
 *
 * Return: void
 */

void times_table(void)
{
	int vert;
	int horz;
	int prod;
	int digit1;
	int digit2;

	for (vert = 0; vert < 10; vert++)
	{
		for (horz = 0; horz < 10; horz++)
		{
			prod = vert * horz;
			digit1 = prod / 10;
			digit2 = prod % 10;

			if ((digit1 != 0) && (horz != 0))
			{
				_putchar(' ');
				_putchar(digit1 + '0');
			}
			else if (horz != 0)
			{ 
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(digit2 + '0');
			if ( horz != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
