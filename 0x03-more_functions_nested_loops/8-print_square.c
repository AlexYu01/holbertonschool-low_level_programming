#include "holberton.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: Integer that determiens the width and height of the square.
 *
 * Return: void.
 */

void print_square(int size)
{
	if (size > 0)
	{
		int row;
		int column;

		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
