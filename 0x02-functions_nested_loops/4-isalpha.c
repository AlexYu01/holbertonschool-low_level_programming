#include "holberton.h"

/**
 * _isalpha - Checks if the character is an alphabetic character
 * @c: The character being checked
 *
 * Return: 1 if c is a upper or lowercase letter.
 * 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

