#include "main.h"
#include <ctype.h>

/**
  * _isupper - function for uppercase characters.
  * @c: char to be tested
  * Return: 1 if c is uppercase otherwise 0
  */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
