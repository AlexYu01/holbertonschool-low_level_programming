#include "holberton.h"

/**
 * _strcmp - Compare two strings.
 * @s1: Pointer to a string.
 * @s2: Pointer to a string.
 *
 * Return: Less than 0 if s1 is shorter than s2. 0 if s1 and s2 match. Greater
 * than 0 if s1 is longer than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int lengthS1;
	int lengthS2;

	lengthS1 = 0;
	lengthS2 = 0;
	while (s1[lengthS1] != '\0')
		lengthS1++;

	while (s2[lengthS2] != '\0')
		lengthS2++;

	if (lengthS1 < lengthS2)
		return (-15);
	else if (lengthS1 > lengthS2)
		return (15);
	else
		return (0);
}
