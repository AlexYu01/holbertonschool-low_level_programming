/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string of characters to match.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int index;
	int j;

	for (index = 0; s[index]; index++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[index] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return ((unsigned int) index);
}
