#include "holberton.h"

/**
 * _abs - Return the absolute values of an integer
 * @n: The integer being passed
 *
 * Return: The absolute value of the integer.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
