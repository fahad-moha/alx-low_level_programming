#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string
  * Return: Always 0 (success)
  */
void puts_half(char *str)
{
	int i, j, long_str;

	long_str = 0;

	for (i = 0; str[i] != '\0'; i++)
		long_str++;

	j = (long_str / 2);

	if ((long_str % 2) == 1)
		j = ((long_str + 1) / 2);

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

}
