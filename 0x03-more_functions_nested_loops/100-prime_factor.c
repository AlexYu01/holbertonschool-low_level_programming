#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 * , followed by a new line.
 *
 * Return: 0 upon successful execution.
 */

int main(void)
{
	unsigned long int num;
	unsigned long int factor;

	num = 612852475143;
	factor = 2;
	while (num % factor == 0)
		num /= factor;
	if (num - factor != 0)
	{
		factor = 3;
		while (num - factor != 0)
		{
			if (num % factor == 0)
				num /= factor;
			else
				factor += 2;
		}
	}
	printf("%lu\n", factor);
	return (0);
}
