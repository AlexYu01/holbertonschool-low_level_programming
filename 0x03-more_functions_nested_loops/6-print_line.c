#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal. Length determined
 * by a passed integer.
 * @n: An integer that determines the length.
 *
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
