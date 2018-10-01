#define NULL 0

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to a string that will be searched.
 * @accept: Pointer to a string containing the bytes to be matched.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	char *target;
	int index;
	int j;

	target = NULL;

	for (index = 0; s[index] != '\0' && !target; index++)
	{
		for (j = 0; accept[j] != '\0' && !target; j++)
		{
			if (s[index] == accept[j])
				target = &s[index];
		}
	}

	return (target);
}
