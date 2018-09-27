#include "holberton.h"

void recursive_print(unsigned int num);

/**
 * print_number - Prints an integer.
 * @n: The passed integer.
 *
 * Return: void.
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	recursive_print(num);
}

/**
 * recursive_print - A recursive function that prints num starting with the
 * first digit.
 *
 * Return: void.
 */

void recursive_print(unsigned int num)
{
	if (num / 10 > 0)
		recursive_print(num / 10);
	_putchar(num % 10 + '0');
}
