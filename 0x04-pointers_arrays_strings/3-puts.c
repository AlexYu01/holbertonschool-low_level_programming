#include "holberton.h"

/**
 * _puts - Prints a string, followed by a new line.
 * @str: Pointer to a character string.
 *
 * Return: void.
 */

void _puts(char *str)
{
	char *temp;

	temp = str;
	while (*temp != '\0')
	{
		_putchar(*temp);
		temp++;
	}
	_putchar('\n');
}
