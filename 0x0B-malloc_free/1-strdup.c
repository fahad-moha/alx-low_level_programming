#include "main.h"
#include <stdlib.h>

/**
  * *_strdup - returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: parameter that creates a duplicate of that string.
  * Return: NULL if str = NULL otherwise a pointer duplicate
  */
char *_strdup(char *str)
{
	unsigned int length, i;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	length = 0;
	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
