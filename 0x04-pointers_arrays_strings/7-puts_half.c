#include "holberton.h"

/**
 * puts_half - Prints the second hard of a string, followed by a new line.
 * @str: Pointer to a character string.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	char *temp;
	int length;
	int n;

	temp = str;
	length = 0;
	while (*temp != '\0')
	{
		length++;
		temp++;
	}
	n = (length - 1) / 2;
	temp = str + n + 1;
	while (*temp != '\0')
	{
		_putchar(*temp);
		temp++;
	}
	_putchar('\n');
}
