#include "main.h"

/**
  * _strlen - returns the length of a string.
  * @s: string in which its length is looking
  * Return: len of a string
  */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
