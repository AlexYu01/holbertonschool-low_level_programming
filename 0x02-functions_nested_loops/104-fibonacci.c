#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci numbers, startin with 1 and 2
 *
 * Return: void
 */

int main(void)
{
	int i;
	long double first;
	long double second;
	long double new;

	first = 1;
	second = 2;
//	printf("%.0f, %.0f, ", first, second);
	puts(first);
	puts(", ");
	puts(second);
	put(", ");
	for (i = 0; i < 98; i++)
	{
		new = second;
		second += first;
		first = new;
		puts(second);
		if (i < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

