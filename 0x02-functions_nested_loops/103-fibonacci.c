#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci numbers, startin with 1 and 2
 *
 * Return: void
 */

int main(void)
{
	long int first;
	long int second;
	long int new;
	long int sum;

	first = 0;
	second = 2;
	sum = second;
	new = 0;

	while (new < 4000000)
	{
		new = second * 4 + first;
		first = second;
		second = new;
		if (new < 4000000)
			sum += new;
	}
	printf("%lu\n", sum);
	return (0);
}

