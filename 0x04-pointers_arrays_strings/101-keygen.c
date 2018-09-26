#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Produces a string of characters whose ASCII sum is 2772.
 *
 * Return: 0 upon exit.
 */
int main(void)
{
	char s[100];
	int count = 0;
	int temp;
	int sum = 0;

	srand(time(NULL));

	while (sum < 2772)
	{
		temp = rand() % (90 - 65 + 1) + 65;
		sum += temp;
		s[count] = temp;
		count++;
		if (sum > 2772)
		{
			sum = 0;
			count = 0;
		}
	}
	s[count] = '\0';
	printf("%s", s);
	return (0);
}
