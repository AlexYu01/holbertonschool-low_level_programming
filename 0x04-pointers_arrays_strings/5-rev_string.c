#include "holberton.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to a character string.
 *
 * Return: void;
 */

void rev_string(char *s)
{
	char *temp;
	char c;
	char *front;
	int i;
	int length;

	length = 0;
	temp = s;
	while (*temp != '\0')
	{
		length++;
		temp++;
	}

	temp--;
	front = s;
	for (i = length; i > length / 2; i--)
	{
		c = *s;
		*s = *temp;
		*temp = c;
		front++;
		temp--;
	}
}
