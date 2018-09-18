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
	long double old_carry;
	long double new_carry;
	long double cutoff;
	long double sum;
	long double temp;

	cutoff = 1000000000000000000;
	old_carry = new_carry = 0;
	first = 1;
	second = 2;
	printf("%.0Lf, %.0Lf, ", first, second);
	for (i = 0; i < 98; i++)
	{
		sum = second + first;
		if (sum > cutoff || new_carry > 0)
		{
			if (old_carry == 0 && new_carry == 0)
			{
				first = second;
			}
			else
			{
				first = second;
				temp = old_carry;
				old_carry = new_carry;
			}
			if (sum > cutoff)
			{
				second = sum - cutoff;
				new_carry = new_carry + 1;
			}
			else
			{
				second = sum;
			}
			new_carry = temp + new_carry;
			printf("%.0Lf%.0Lf", new_carry, second);
		}
		else
		{
			first = second;
			second = sum;
			printf("%.0Lf", second);
		}
		if (i < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

