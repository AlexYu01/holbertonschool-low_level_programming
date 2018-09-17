#include <stdio.h>

/**
 * main - Print the sum of all numbers divisible by 3 or 5 below 1024
 * (excluded)
 *
 */

int main(void)
{
	int i;
	int sum;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
