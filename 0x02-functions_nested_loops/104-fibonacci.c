#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci numbers, startin with 1 and 2
 *
 * Return: void
 */

int main(void)
{
	unsigned long int firstA, firstB, secondA, secondB, tempA, tempB, cutoff;
	int i;

	cutoff = 10000000000;
	firstA = 1 / cutoff;
	firstB = 1 % cutoff;
	secondA = 2 / cutoff;
	secondB = 2 % cutoff;
	printf("%lu, %lu, ", firstB, secondB);
	for (i = 0; i < 98; i++)
	{
		tempA = secondA;
		tempB = secondB;
		if ((firstB + secondB) > cutoff)
		{
			secondA += firstA + 1;
			secondB = (firstB + secondB) % cutoff;
		}
		else
		{
			secondA += firstA;
			secondB += firstB;
		}
		if (secondA > 0)
			printf("%lu%lu", secondA, secondB);
		else
			printf("%lu", secondB);
		firstA = tempA;
		firstB = tempB;
		if (i < 97)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}

