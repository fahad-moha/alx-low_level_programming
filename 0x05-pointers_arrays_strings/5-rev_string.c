#include "main.h"
#include <string.h>

/**
  * rev_string - reverses a string.
  * @s: character
  * Return: Always 0 (success)
  */
void rev_string(char *s)
{
	char reverse_str = s[0];
	int step = 0;
	int i;

	while (s[step] != '\0')
	step++;
	for (i = 0; i < step; i++)
	{
		step--;
		reverse_str = s[i];
		s[i] = s[step];
		s[step] = reverse_str;
	}

}
