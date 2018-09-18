#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci numbers, startin with 1 and 2
 *
 * Return: void
 */

int main(void)
{
	int i;
	long int first;
	long int second;
	long int new;

	first = 1;
	second = 2;
	printf("%lu, %lu, ", first, second);

	for (i = 2; i < 50; i++)
	{
		new = second;
		second += first;
		first = new;
		printf("%lu", second);
		if (i < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}

