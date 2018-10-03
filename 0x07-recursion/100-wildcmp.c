int comparing(char *s1, char *s2, int flag);

/**
  * wildcmp - Checks if two strings are identical, wildcard '*' is included.
  * @s1: Pointer to the first string.
  * @s2: Pointer to the second string.
  *
  * Return: 1 if the string can be considered identical, otherwise return 0.
  */

int wildcmp(char *s1, char *s2)
{
	return (comparing(s1, s2, 0));
}

/**
  * comparing - Checking for identical strings.
  * @s1: Pointer to the first string.
  * @s2: Pointer to the second string.
  * @flag: Set to 1 if an '*' was encountered in s2.
  *
  * Return: 1 if the strings are considered identical, 0 otherwise.
  */

int comparing(char *s1, char *s2, int flag)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		else
			return (comparing(s1, s2 + 1, 1));
	}

	if (flag == 1)
	{
		if (*s2 == '\0')
		{
			if (*s1 == '\0')
				return (1);
			else
				return (0);
		}
		if (*s1 != '\0')
		{
			if (*s1 != *s2)
				return (comparing(s1 + 1, s2, flag));
			else
				return (comparing(s1 + 1, s2 + 1, flag));
		}
		else
		{
			return (0);
		}
	}

	if (*s1 == *s2)
		return (comparing(s1 + 1, s2 + 1, 0));
	else
		return (0);
}
