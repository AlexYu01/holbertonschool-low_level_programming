#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci numbers, startin with 1 and 2
 *
 * Return: void
 */

int main(void)
{
	int i;
	double first;
	double second;
	double new;

	first = 1;
	second = 2;
	printf("%.0f, %.0f, ", first, second);

	for (i = 0; i < 98; i++)
	{
		new = second;
		second += first;
		first = new;
		printf("%0.f", second);
		if (i < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

