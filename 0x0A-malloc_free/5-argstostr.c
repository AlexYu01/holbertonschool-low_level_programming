#include <stdlib.h>

unsigned int _strlen(char *s);

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the characters string.
 *
 * Return: The length of the character string.
 */

unsigned int _strlen(char *s)
{
	unsigned int length;

	length = 0;

	while (s[length])
		length++;
	return (length);
}
/**
  * argstostr - Concatenates all the arguments of the program.
  * @ac: The number of arguments.
  * @av: Pointer to a pointer of strings containing the arguments.
  *
  * Return: Pointer to the concatenated argument string.
  */

char *argstostr(int ac, char **av)
{
	unsigned int len;
	int i;
	int j;
	int index;
	char *ptr;

	len = 0;
	index = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);

	ptr = malloc(sizeof(**av) * (ac + len + 1));

	if (ptr)
	{
		for (i = 0; i < ac; i++)
		{
			j = 0;
			while (av[i][j])
			{
				ptr[index++] = av[i][j];
				j++;
			}
			if (!(av[i][j]))
				ptr[index++] = '\n';
		}

		ptr[index] = '\0';
	}
	else
	{
		return (NULL);
	}

	return (ptr);
}
