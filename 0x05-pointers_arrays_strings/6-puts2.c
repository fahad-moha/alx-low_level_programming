#include "main.h"

/**
  * puts2 - prints every other character of a string,
  * starting with the first character.
  * @str: string
  * Return: Always 0 (success)
  */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
