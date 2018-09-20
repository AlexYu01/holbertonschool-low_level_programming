#include "holberton.h"

/**
 * _isupper - Checks if the character is an uppercase character.
 * @c: An integer that represents an ascii code for a character.
 *
 * Return: 1 if the ascii code corresponds with an uppercase character.
 * 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
