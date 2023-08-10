#include "main.h"
#include <stdlib.h>

/**
  * *_realloc - reallocates a memory block using malloc and free
  * @new_size: is the new size, in bytes, of the memory block.
  * @old_size: is the size, in bytes, of the allocated space for ptr
  * @ptr: is a pointer to the memory block previously allocated using malloc
  * Return: NULL or a pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;
	unsigned char *byte_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size <= old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;
	for (i = 0; i < old_size; i++)
		((unsigned char *)new_ptr)[i] = byte_ptr[i];
	free(ptr);
	return (new_ptr);
}
