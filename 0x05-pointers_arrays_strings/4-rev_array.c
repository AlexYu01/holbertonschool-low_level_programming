/**
 * reverse_array - Reverse an array of integers.
 * @a: Pointer to an integer array.
 * @n: Size of the integer array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int temp;
	int front;
	int back;

	front = 0;
	back = n - 1;

	while (front < n / 2)
	{
		temp = a[front];
		a[front++] = a[back];
		a[back--] = temp;
	}
}
