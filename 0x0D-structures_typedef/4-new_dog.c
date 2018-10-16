#include <stdlib.h>
#include "dog.h"

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
	dog_t *dog;

	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
