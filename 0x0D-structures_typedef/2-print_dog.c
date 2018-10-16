#include <stdio.h>
#include "dog.h"

/**
  * print_dog - Prints the information store in the structure, dog.
  * @d: Pointer an instance of structure dog.
  *
  * Return: void.
  */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		if (d->name)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");

		printf("Age: ");
		if (d->age)
			printf("%f\n", d->age);
		else
			printf("(nil)\n");
		printf("Owner: ");
		if (d->owner)
			printf("%s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
