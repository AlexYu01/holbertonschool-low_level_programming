#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase, followed by a new
 * line ten times
 *
 * Return: void
 */

void  print_alphabet_x10(void)
{
	char letter;
	int loop10;

	for (loop10 = 0; loop10 < 10; loop10++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
