#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - print a random number, its last digit and whether or not the digit
 * is greater than 5, less than 6 but not 0, or 0
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int n;
	/*char str[12];*/
	/* int lastN;*/
	int i;
	/* char c;*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	printf("Last digit of %d is %d", n, i);
	if (i > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (i != 0 && i < 6)
	{
		printf(" and is less than 6 and not 0\n");
	}
	else
	{
		printf(" and is 0\n");
	}
	/* your code goes there */
	return (0);
}
