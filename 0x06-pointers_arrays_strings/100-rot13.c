#include "main.h"

/**
  * *rot13 - encodes a string using rot13.
  * @str: string to be encoded
  * Return: encoded string
  */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*ptr != '\0')
	{
		i = 0;
		while (alpha[i] != '\0')
		{
			if (*ptr == alpha[i])
			{
				*ptr = rot13[i];
				break;
			}
			i++;
		}
		ptr++;
	}
	return (str);
}
