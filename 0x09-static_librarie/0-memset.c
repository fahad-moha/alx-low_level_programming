#include "main.h"

/**
  * *_memset - fills memory with a constant byte.
  * @n: the size of the memory to print
  * @b: character
  * @s: the address of memory to print
  * Return: a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
