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

	last = n;
	if (n < 0)
		last *= -1;
	last %= 10;
	_putchar('0' + last);
	return (last);
}
