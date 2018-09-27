int separator(char c);

/**
 * cap_string - Capitalize all words of a string.
 * @s: Pointer to a string.
 *
 * Return: Pointer to the string.
 */

char *cap_string(char *s)
{
	int index;
	int prev;

	index = 0;

	if (s[index] >= 'a' && s[index] <= 'z')
		s[index++] -= 32;
	prev = 0;
	for (index = 1; s[index] != '\0'; index++)
	{
		if (separator(s[prev]))
		{
			if (s[index] >= 'a' && s[index] <= 'z')
			s[index] -= 32;
		}
	prev++;
	}
	return (s);
}

/**
 * separator - Checks if c is one of the separators.
 * @c: The character passed.
 *
 * Return: 1 if c is a separator. 0 otherwise.
 */

int separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';')
		return (1);
	if (c == '.' || c == '!' || c == '?' || c == '"' || c == '(')
		return (1);
	if (c == ')' || c == '{' || c == '}')
		return (1);
	return (0);
}
