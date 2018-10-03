int prime_recursion(int n, int i);

/**
  * is_prime_number - Determines of the integer is a prime number.
  * @n: The number.
  *
  * Return: 1 if n is a prime number and 0 otherwise.
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_recursion(n, 2));
}

/**
  * prime_recursion - Determines if n is a prime.
  * @n: The number being checked for prime-ness.
  * @i: Factor.
  *
  * Return: 0 if n is divisible by i but n and i are not the same number. 1 if
  * they are (prime).
  */

int prime_recursion(int n, int i)
{
	if (n % i == 0)
	{
		if (n != i)
			return (0);
		else
			return (1);
	}
	return (prime_recursion(n, i + 1));
}
