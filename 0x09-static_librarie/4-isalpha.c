#include "main.h"

/**
  * _isalpha - checks for alphabetic character.
  * @c: is the character to be checked
  * Return: retruns 1 if c is alphabet otherwise 0.
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
