#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: An integer that determines thel length of the diagonal.
 *
 * Return: void/
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int row;
		int column;

		for (row = 0; row < n; row++)
		{
			for (column = 0; column < n; column++)
			{
				if (row == column)
				{
					_putchar('\\');
					column = n;
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
