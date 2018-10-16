#include <stdlib.h>
#include "dog.h"

/**
 * _strlen- Returns the length of a string.
 * @s: A pointer to the character string.
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
 * _strcpy - Copies the string pointed to by src, including the terminating
 * null byte to the buffer pointed by des.
 * @dest: Pointer to the destination of copied string.
 * @src: Pointer to the src of the source string.
 *
 * Return: void.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
  * new_dog - Creates a new dog.
  * @name: Name of the new dog.
  * @age: Age of the new dog.
  * @owner: Owner of the new dog.
  *
  * Return: Pointer to the new dog.
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_new_dog;
	dog_t a_dog;

	a_new_dog = &a_dog;

	a_dog.age = age;

	a_dog.name = malloc(sizeof(*name) * (_strlen(name) + 1));
	if (!a_dog.name)
		return (NULL);

	a_dog.owner = malloc(sizeof(*owner) * (_strlen(owner) + 1));
	if (!a_dog.owner)
	{
		free(a_dog.name);
		return (NULL);
	}

	_strcpy(a_dog.name, name);
	_strcpy(a_dog.owner, owner);

	return (a_new_dog);
}
