#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

unsigned int num_len(char *s);

void *_calloc0(unsigned int nmemb, unsigned int size);

void print_string(char *s);

void _mul(char *temp, char *num1, unsigned int len1, char digit2);

void _add(char *total, char *temp, char *front);

/**
 * num_len - Returns the length of a string containing numbers. If there's a
 * non digit, prints Error and exits with status 98.
 *
 * @s: A pointer to the character string.
 *
 * Return: The length of the character string.
 */

unsigned int num_len(char *s)
{
	unsigned int length;

	length = 0;

	while (s[length])
	{
		if (s[length] < '0' || s[length] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		length++;
	}
	return (length);
}

/**
  * _calloc0 - Allocates memory for an array using malloc and then sets the
  * memory to character 0.
  * @nmemb: Number of elements to allocate for the array.
  * @size: Size in bytes of each element.
  *
  * Return: A void pointer to the first byte of the allocated memory, or NULL.
  */

void *_calloc0(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int bytes;

	bytes = nmemb * size;

	if (bytes <= 0)
		return (NULL);

	ptr = malloc(bytes);

	if (!ptr)
		return (NULL);

	for (i = 0; i < bytes - 1; i++)
		ptr[i] = '0';

	ptr[i] = '\0';

	return ((void *) ptr);
}


/**
  * print_string - Print a string of numbers. If the string of numbers contain
  * only 0s then print one 0.
  * @s: Pointer to the string.
  *
  * Return: void.
  */

void print_string(char *s)
{
	char *temp;

	temp = s;
	while (*temp == '0')
		temp++;

	if (*temp != '\0')
	{
		while (*temp)
		{
			_putchar(*temp);
			temp++;
		}
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
}

/**
  * _mul - Store product of num1 and the current digit from num2..
  * @temp: Pointer to second to last byte (right before the null byte).
  * Decrement as the array gets filled.
  * @num1: Pointer to string storing first number.
  * @len1: Length of num1.
  * @digit2: Current digit from second number.
  *
  * Return: void.
  */

void _mul(char *temp, char *num1, unsigned int len1, char digit2)
{
	int j;
	unsigned int prod;
	unsigned int leftover;

	leftover = 0;

	for (j = len1 - 1; j >= 0; j--)
	{
		prod = (num1[j] - '0') * (digit2 - '0') + leftover;
		leftover = prod / 10;
		*temp = (prod % 10) + '0';
		temp--;
	}
	*temp = leftover + '0';
}

/**
  * _add - Basically total += temp. Iterate through temp and add to the number
  * stored in total. 'total' points to the last digit of the sum so far during
  * the first call to _add. Every subsequent call, total starts one digit
  * (byte) closer to the front than the previous call to _add.
  * E.g When doing 12 x 13 = 156, the last digit, 6 does not
  * change during the addition proces of multiplication.
  * @total: Pointer to
  * (address of 2nd to last element of the array - bytes to skip) address of
  * the array containing the total so far.Decrement for every loop.
  * @temp: Pointer to the 2nd to last bye of the array containing the
  * most recent product of num1 and a digit from num2.
  * Decrement for every loop.
  * @front: Pointer to the 1st byte of the array containing the most recent
  * product of num1 and a digit from num2. Used for loop ending condition.
  *
  * Return: void.
  */

void _add(char *total, char *temp, char *front)
{
	unsigned int sum;
	unsigned int leftover;

	leftover = 0;
	do {
		sum = (*temp - '0') + (*total - '0') + leftover;
		leftover = sum / 10;
		*total = (sum % 10) + '0';
		total--;
		temp--;
	} while (temp != front);
	*total = ((*temp - '0') + leftover) + '0';
}
/**
  * main - Multiplies two positive numbers and prints to terminal.
  * @argc: The number of arguments passed.
  * @argv: A pointer to an array of pointers that point to the arguments.
  *
  * Return: 0 upon successful run.
  */

int main(int argc, char **argv)
{
	char *total;
	char *temp;
	char *num1;
	char *num2;
	int i;
	unsigned int len1;
	unsigned int len2;
	unsigned int start;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	len1 = num_len(argv[1]);
	len2 = num_len(argv[2]);
	num1 = argv[1];
	num2 = argv[2];

	total = _calloc0(sizeof(*total) * (len2 + len1 + 1), 1);

	if (!total)
	{
		printf("Allocation of total has failed\n");
		exit(98);
	}

	start = 0;
	/* iterate through each digit in num2 starting with last*/
	for (i = len2 - 1; i >= 0; i--)
	{

		temp = _calloc0(sizeof(*temp) * (len1 + 1 + 1), 1);
		if (!temp)
		{
			printf("Allocation of temp has failed\n");
			free(total);
			exit(98);
		}

		/* pass 2nd to last byte address of temp */
		_mul((temp + len1 + 1 - 1), num1, len1, num2[i]);

		/* pass the (2nd to last element - start) address of total */
		/* pass the 2nd to last element of temp */
		/* pass pointer to the front of the array for temp. */
		_add((total + len2 + len1 - 1 - start), (temp + len1 + 1 - 1), temp);

		free(temp);

		start++;
	}

	print_string(total);

	free(total);

	return (0);
}
