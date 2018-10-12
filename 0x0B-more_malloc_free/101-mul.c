#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

unsigned int num_len(char *s);

void *_calloc0(unsigned int nmemb, unsigned int size);

void rev_string(char *s);

void print_string(char *s);

void _mul(char *temp, char *num1, unsigned int len1, char digit2);

void _add(char *total, char *temp, unsigned int current);

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

	for (i = 0; i < bytes; i++)
		ptr[i] = '0';

	return ((void *) ptr);
}

/**
 * rev_string - Reverses a string.
 * @s: Pointer to a character string.
 *
 * Return: void;
 */

void rev_string(char *s)
{
	char c;
	unsigned int back;
	unsigned int front;
	unsigned int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	front = 0;
	for (back = length - 1; back >= length / 2; back--)
	{
		c = s[front];
		s[front] = s[back];
		s[back] = c;
		front++;
	}
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
  * _mul - Store product of num1 and the current digit from num2 in temp in
  * reverse.
  * @temp: Pointer a char array that will store the product of num1 and a digit
  * from num2, in reverse.
  * @num1: Pointer to string storing first number. (Not in reverse).
  * @len1: Length of num1.
  * @digit2: Current digit from second number.
  *
  * Return: void.
  */

void _mul(char *temp, char *num1, unsigned int len1, char digit2)
{
	int j;
	unsigned int k;
	unsigned int prod;
	unsigned int leftover;

	k = 0;
	leftover = 0;

	for (j = len1 - 1; j >= 0; j--)
	{
		prod = (num1[j] - '0') * (digit2 - '0') + leftover;
		leftover = prod / 10;
		temp[k] = (prod % 10) + '0';
		k++;
	}
	temp[k++] = leftover + '0';
	temp[k] = '\0';
}

/**
  * _add - Basically total += temp. Iterate through temp and add to the number
  * stored in total that is also stored in reverse. 'current' represents n
  * digits to skip over 'total' as they will not change. E.g When doing
  * 12 x 13 = 156, the last digit, 6 does not change during the addition proces
  * of multiplication of two numbers. 'current' starts out at 0, but everytime
  * _add is called, one more digit gets skipped over than last time.
  * @total: Pointer to string containing current total, in reverse.
  * @temp: Pointer to the most recent product of num1 and a digit from num2,
  * in reverse.
  * @current: How many digits to skip over.
  *
  * Return: void.
  */

void _add(char *total, char *temp, unsigned int current)
{
	unsigned int k;
	unsigned int sum;
	unsigned int leftover;

	k = 0;
	leftover = 0;
	while (temp[k])
	{
		sum = (temp[k] - '0') + (total[current] - '0') + leftover;
		leftover = sum / 10;
		total[current] = (sum % 10) + '0';
		current++;
		k++;
	}
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
	/* Calculations are stored in reverse */
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

		_mul(temp, num1, len1, num2[i]);

		_add(total, temp, start);

		free(temp);

		start++;
	}
	total[len1 + len2] = '\0';

	rev_string(total);

	print_string(total);

	free(total);

	return (0);
}
