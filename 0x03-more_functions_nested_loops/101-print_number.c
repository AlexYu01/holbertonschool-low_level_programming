#include "holberton.h"

void print_number_recursive(unsigned int n);

/**
 * print_number - Prints an integer.
 * @n: Integer to be printed.
 *
 * Return: void.
 */

void print_number(int n)
{	
	unsigned int i;

	if(n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}
	print_number_recursive(i);
}
/**
 * print_numbers - Recursive function to print integers.
 *
 * Return: void.
 */

void print_number_recursive(unsigned int n)
{
	if (n % 10 != 0)
	{
		if (n / 10 != 0)
			print_number_recursive(n / 10);
		_putchar((n % 10) + '0');
	}
	else
	{
		if (n / 10 != 0)
			print_number_recursive(n / 10);
		_putchar((n % 10) + '0');
	}
}
