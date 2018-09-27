/**
 * _strncpy - Copies a string.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: n bytes to copy from src.
 *
 * Return: Pointer dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; src[index] != '\0' && index < n; index++)
		dest[index] = src[index];

	for (; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
