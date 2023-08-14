#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog.
 * @d: Pointer to the dog to be freed.
 *
 * Description: This function frees the memory allocated for a dog structure,
 *              including the name and owner strings. It takes a pointer to the
 *              dog structure as input and releases the associated memory.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
