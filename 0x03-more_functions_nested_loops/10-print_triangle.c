#include "holberton.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: The integer that determines the size of the triangle.
 *
 * Return: void.
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int row;
		int column;

		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				if (column >= size - row - 1)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
