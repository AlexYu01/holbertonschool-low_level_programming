#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - Frees up heap memory consumed by the variable d points to.
  * @d: Pointer to a structure that uses heap memory.
  *
  * Return: void.
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);

		if (d->owner)
			free(d->owner);

		free(d);
	}
}
