#include "main.h"

/**
  * *_memcpy - copies memory area.
  * @src: pointer source
  * @dest: pointer destination
  * @n: the size of the memory to print
  * Return: a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
