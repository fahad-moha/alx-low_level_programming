#include "main.h"
#include <stdlib.h>

/**
  * *malloc_checked - allocates memory using malloc.
  * @b: integer
  * Return: a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
		return ((void *)98);
	}
	return (ptr);
}
