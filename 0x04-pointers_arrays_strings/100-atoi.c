#include <stdio.h>

/**
 * _atoi - Convert string to an integer.
 * @s: Pointer to a character string.
 *
 * Return: void.
 */

int _atoi(char *s)
{
	int positives, negatives, length, i, num;
	unsigned int position;
	char *temp;

	temp = s;
	length = 0;
	positives = 0;
	negatives = 0;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '+')
			positives++;
		else if (*temp == '-')
			negatives++;
		temp++;
	}
	num = 0;
	if (*temp != '\0')
	{
		while (*temp >= '0' && *temp <= '9')
		{
			length++;
			temp++;
		}
		temp--;
		position = 1;
		for (i = 0; i < length; i++)
		{
			if (negatives > positives)
				num -= (*temp - '0') * position;
			else
				num += (*temp - '0') * position;
			position *= 10;
			temp--;
		}
	}
	return (num);
}
