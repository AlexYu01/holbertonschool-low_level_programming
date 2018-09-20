#include "holberton.h"

/**
 * _isdigit - Checks if the integer passed is an ascii value that corresponds
 * to the characters 0 through 9.
 * @c: The integer passed.
 *
 * Return: 1 if c is a digit. 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
