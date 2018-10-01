#include "holberton.h"
#include <stdio.h>

/**
 * Sets values of a pointer to a char.
 * @s: A pointer to a pointer of a string.
 * @to: Pointer to a string that will be changed.
 *
 * Return: void.
 */

void set_string(char **s, char *to)
{
	*s = to;
}

