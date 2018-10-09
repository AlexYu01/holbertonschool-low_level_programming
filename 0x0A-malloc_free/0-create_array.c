#include <stdlib.h>

/**
  * create_array - Creates an array of chars, and initialized it with a
  * specific char.
  * @size: Unsigned int that represents the size of the array.
  * @c: The character to fill the array with.
  *
  * Return: A char pointer to the array.
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	ptr = malloc(sizeof(size) * size);

	if (ptr)
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
	}

	return (ptr);
}
