#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog with the provided values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to a character array representing the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to a character array representing the owner of the dog.
 *
 * Description: This function initializes a struct dog with the provided
 *              values for name, age, and owner. It dynamically allocates
 *              memory for the name and owner strings and copies the values
 *              into the allocated memory.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i;

	if (d == NULL)
		return;
	d->name = malloc(sizeof(char) * 50);
	if (d->name == NULL)
		exit(1);
	d->owner = malloc(sizeof(char) * 50);
	if (d->owner == NULL)
	{
		free(d->name);
		exit(1);
	}
	i = 0;
	while ((d->name[i] = name[i]) != '\0')
		i++;
	d->age = age;
	i = 0;
	while ((d->owner[i] = owner[i]) != '\0')
		i++;
}
