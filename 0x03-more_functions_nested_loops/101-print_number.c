#include "holberton.h"

/**
 * print_number - Prints an integer.
 * @n: Integer to be printed.
 *
 * Return: void.
 */

void print_number(int n)
{
	int digit1;
	int digit2;
	int digit3;
	int digit4;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	digit1 = n / 1000;
	digit2 = n / 100 % 10;
	digit3 = n / 10 % 10;
	digit4 = n % 10;

	if (digit1 > 0)
		_putchar(digit1 + '0');
	if (digit1 > 0)
		_putchar(digit2 + '0');
	else if (digit2 > 0)
		_putchar(digit2 + '0');
	if (digit2 > 0)
		_putchar(digit3 + '0');
	else if (digit3 > 0)
		_putchar(digit3 + '0');
	_putchar(digit4 + '0');
}
