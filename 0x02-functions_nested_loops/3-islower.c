#include "holberton.h"

/**
 * _islower - Checks if a chracter is lowercase
 * @c: The character being checked
 *
 * Return: 1 if the character is lowercase.
 * 0 otherwise.
 */

int _islower(int c)
{
	if (c < 'a' || c > 'z')
		return (0);
	else
		return (1);
}

