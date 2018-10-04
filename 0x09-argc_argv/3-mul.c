#include <stdio.h>

int _atoi(char *s);

/**
  * main - Multiplies two numbers;
  * @argc: The number of arguments.
  * @argv: An array of pointers to strings containing the arguments.
  *
  * Return: 0 upon success, 1 otherwise.
  */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}

/**
  * _atoi - Converts numbers stored as strings and stores them in an int.
  * @s: Pointer to the string containing the number.
  *
  * Return: The number stored in an int.
  */

int _atoi(char *s)
{
	char *temp;
	int num;
	int sign;

	temp = s;
	num = 0;
	sign = 1;

	if (*temp == '-')
	{
		sign = -1;
		temp++;
	}

	while (*temp)
	{
		num = num * 10 + (*temp - '0');
		temp++;
	}

	return (sign * num);
}
