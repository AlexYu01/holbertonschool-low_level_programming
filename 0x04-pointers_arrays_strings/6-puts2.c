#include "holberton.h"

/**
 * puts2 - Prints one char out of 2 of a string, followed by a new line.
 * @str: Pointer to a character string.
 *
 * Return: void.
 */

void puts2(char *str)
{
	char *temp;

	temp = str;
	while (*temp != '\0')
	{
		_putchar(*temp);
		temp += 2;
	}
	_putchar('\n');
}
