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
	int index;

	index = 0;
	while (s1[index] != '\0')
	{
		if (s1[index] > s2[index])
			return (s1[index] - s2[index]);
		else if (s1[index] < s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	if (s2[index] == '\0')
		return (0);
	else
		return (-15);
}
