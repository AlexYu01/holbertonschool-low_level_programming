#include "holberton.h"

/**
 * leet - Encode a string into 1337.
 * @s: Pointer to a character string.
 *
 * Return: Pointer to the character string.
 */

char *leet(char *s)
{
	char *lower = "aeotl";
	char *upper = "AEOTL";
	char *number = "43071";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
			{
				s[i] = number[j];
				j = 5;
			}
		}


	}
	return (s);
}
