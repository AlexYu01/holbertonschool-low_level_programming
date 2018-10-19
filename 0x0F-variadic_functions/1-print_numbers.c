#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - Prints numbers, followed by a new line. Varying amount of
  * numbers may be passed.
  * @separator: The string that will be printed in between numbers.
  * @n: The numbers of arguments passed after n.
  *
  * Return: Void.
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (n == 0)
		return;

	va_start(nums, n);

	if (separator)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(nums, int), separator);
		printf("%d\n", va_arg(nums, int));
	}
	else
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(nums, int));
		printf("\n");
	}

	va_end(nums);
}

