#include "main.h"

/**
  * *_strcat - concatenates two strings.
  * @src: appends from
  * @dest: appends to
  * Return: a pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
