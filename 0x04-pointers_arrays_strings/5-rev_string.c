#include "holberton.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to a character string.
 *
 * Return: void;
 */

void rev_string(char *s)
{
	char c;
	int back;
	int front;
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	front = 0;
	for (back = length - 1; back > length / 2; back--)
	{
		c = s[front];
		s[front] = s[back];
		s[back] = c;
		front++;
	}
}
