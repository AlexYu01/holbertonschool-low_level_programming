#include <stdlib.h>

/**
  * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
  * @width: Width of the array.
  * @height: Height of the array.
  *
  * Return: A pointer to a 2 dimensional array.
  */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * height);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(**ptr) * width);
		if(ptr[i]  == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
