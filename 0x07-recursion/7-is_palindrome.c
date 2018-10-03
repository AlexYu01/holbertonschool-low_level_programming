int _strlen_recursion(char *s);

int a_palindrome(char *s, char *l, int n);

/**
  * is_palindrome - Determines if a string is a palindrome and 0 if not.
  * @s: Pointer to a string.
  *
  * Return: 1 if the string is a palindrome and 0 if not.
  */

int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	return (a_palindrome(s, s + length - 1, length / 2));
}

/**
  * _strlen_recursion - Returns the length of a string.
  * @s: Pointer to the string.
  *
  * Return: void.
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
  * a_palindrome - Determines if a string is a palindrome.
  * @s: Pointer to the beginning half of the string.
  * @l: Pointer to the last half of the string.
  * @n: Integer determining section of the string being checked. 0 means the
  * center is being checked.
  *
  * Return: 1 if the string is a palindrome, 0 otherwise.
  */

int a_palindrome(char *s, char *l, int n)
{
	if (n == 0)
		return (1);
	if (*s == *l)
		return (a_palindrome(s + 1, l - 1, n - 1));
	else
		return (0);
}

