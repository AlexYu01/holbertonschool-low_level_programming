int sqrt_recursion(int n, int i);

/**
  * _sqrt_recursion - Returns natural square root of a number.
  * @n: A number.
  *
  * Return: natural square root of a number.
  */

int _sqrt_recursion(int n)
{
	return (sqrt_recursion(n, 1));
}

/**
  * sqrt_recursion - Recursive helper.
  * @n: A number.
  * @i: Another number.
  *
  * Return: i if i square is n. -1 if i square is greater than n
  */

int sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	else
		return (sqrt_recursion(n, i + 1));
}
