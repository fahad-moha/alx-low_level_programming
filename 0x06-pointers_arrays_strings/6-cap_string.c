#include "main.h"

/**
  * *cap_string - capitalizes all words of a string.
  * @str: string to be capitalized
  * Return: capitalize string
  */
char *cap_string(char *str)
{
	char *ptr = str;
	int cap_next = 1;

	while (*ptr != '\0')
	{
		if (cap_next && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr -= 32;
			cap_next = 0;
		}
		else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr == ';' || *ptr == '.' ||
				*ptr == '!' || *ptr == '?' || *ptr == '"' ||
				*ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			cap_next = 1;
		}
		else
		{
			cap_next = 0;
		}
		ptr++;
	}
	return (str);
}
