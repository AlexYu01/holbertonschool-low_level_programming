#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, where multiples of three are
 * replaced with Fizz and Buzz if multiples of five, and FizzBuzz if it is
 * a multiple of three and five. Followed by a new line.
 *
 * Return: 0 upon successful execution.
 */

int main(void)
{
	int num;

	printf("1 2");
	for (num = 3; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf(" Fizz");
			if (num % 5 == 0)
				printf("Buzz");
		}
		else if (num % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", num);
		}
	}
	printf("\n");
	return (0);
}
