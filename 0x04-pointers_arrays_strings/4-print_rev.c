#include "holberton.h"

/**
 * print_rev - Prints a string , in reverse, followed by a new line.
 * @s: Pointer to a character string.
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int length;
	int i;
	char *temp;

	length = 0;
	temp = s;
	while (*temp != '\0')
	{
		length++;
		temp++;
	}

	for (i = length - 1; i >= 0; i--)
		_putchar(*(--temp));
	_putchar('\n');
}
