#include "holberton.h"

/**
 * print_last_digit - Returns the last digit of a number
 * @n: The number being passed
 *
 * Return: The last digit as an int of the number in n.
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = n * -1;
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
