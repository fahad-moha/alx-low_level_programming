#include "main.h"

/**
  * *string_toupper - changes all lowercase letters of a string to uppercase.
  * @str: string to uppercase
  * Return: string uppercase
  */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}
	return (str);
}
