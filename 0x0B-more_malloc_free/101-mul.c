#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

unsigned int num_len(char *s);

void *_calloc0(unsigned int nmemb, unsigned int size);

void rev_string(char *s);

void print_string(char *s);

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
	int i;
	int bytes;

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
	int back;
	int front;
	int length;

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
  * main - Multiplies two positive numbers and prints to terminal.
  * @argc: The number of arguments passed.
  * @argv: A pointer to an array of pointers that point to the arguments.
  *
  * Return: 0 upon successful run.
  */

int main(int argc, char **argv)
{
	int len1;
	int len2;
	int i;
	int j;
	int k;
	int start;
	int current;
	int prod;
	int sum;
	int leftover;
	char *total;
	char *temp;
	char *num1;
	char *num2;

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
		k = 0;
		leftover = 0;

		temp = _calloc0(sizeof(*temp) * (len1 + 1 + 1), 1);
		if (!temp)
		{
			printf("Allocation of temp has failed\n");
			free(total);
			exit(98);
		}
		/* Store product of num1 and the current digit from num2 in */
		/* temp in reverse */
		for (j = len1 - 1; j >= 0; j--)
		{
			prod = (num1[j] - '0') * (num2[i] - '0') + leftover;
			leftover = prod / 10;
			temp[k] = (prod % 10) + '0';
			k++;
		}
		temp[k++] = leftover + '0';
		temp[k] = '\0';

		k = 0;
		leftover = 0;
		/* start is the first n digits that will not change in */
		/* total (storing number in reverse so actually last */
		/* n digits). Start begins with 0. After every time */
		/* total += temp, start increments by 1. */
		/* In 11 * 10 = 110, the last 0 doesnt change when */
		/* performing addition to get the product. */
		current = start;
		/* iterate through temp and add to the number stored in */
		/* total that is also stored in reverse. total += temp */
		while (temp[k])
		{
			sum = (temp[k] - '0') + (total[current] - '0') + leftover;
			leftover = sum / 10;
			total[current] = (sum % 10) + '0';
			current++;
			k++;
		}

		free(temp);
		start++;
	}
	total[current] = '\0';

	rev_string(total);
	print_string(total);
	free(total);
	return (0);
}
