#include <stdio.h>

int _atoi(char *s);

/**
  * main - Adds and prints positive numbers.
  * @argc: The number of arguments.
  * @argv: An array of pointers to strings containing the arguments.
  *
  * Return: 0 upon success, 1 otherwise.
  */

int main(int argc, char **argv)
{
	int sum;
	int index;
	int num;

	sum = 0;
	num = 0;

	for (index = 1; index < argc; index++)
	{
		num = _atoi(argv[index]);

		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}

/**
  * _atoi - Converts a number inside a string and stores it into an int.
  * @s: Pointer to the string containing the number.
  *
  * Return: The number stored in an int.
  */

int _atoi(char *s)
{
	int num;
	char *temp;

	temp = s;
	num = 0;

	while (*temp)
	{
		if (*temp >= '0' && *temp <= '9')
			num = num * 10 + (*temp - '0');
		else
			return (-1);
	
		temp++;
	}

	return (num);
}
