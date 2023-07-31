#include "main.h"
#include <stdlib.h>

/**
  * set_string - sets the value of a pointer to a char.
  * @s: is a pointer to a pointer to a character.
  * @to: is a pointer to a character, which represents
  * the string that we want to copy to the memory location pointed to by s.
  * Return: Always 0 (success)
  */
void set_string(char **s, char *to)
{
	int i, len;

	len = 0;
	while (to[len] != '\0')
	{
		len++;
	}
	*s = (char *)malloc(sizeof(char) * (len + 1));

	for (i = 0; i < len; i++)
	{
		(*s)[i] = to[i];
	}
	(*s)[i] = '\0';
}
