#include "holberton.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14, followed
 * by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int num;
	int digit1;
	int digit2;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			digit1 = num / 10;
			digit2 = num % 10;
			if (digit1 > 0)
				_putchar(digit1 + '0');
			_putchar(digit2 + '0');
		}
		_putchar('\n');
	}
}
