#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the minimum number of coins to make change for an amount
  * of money.
  * @argc: The number of arguments. Should be 2.
  * @argv: An array of pointers to strings that contain the arguments.
  *
  * Return: 0 upon success, 1 otherwise.
  */

int main(int argc, char **argv)
{
	int cents;
	int coins;
	int index;
	int value[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = 0;
	cents = atoi(argv[1]);
	if (cents > 0)
	{
		for (index = 0; index < 4; index++)
		{
			while (cents / value[index] > 0)
			{
				coins++;
				cents -= value[index];
			}
		}
		coins += cents;
	}
	printf("%d\n", coins);

	return (0);
}
