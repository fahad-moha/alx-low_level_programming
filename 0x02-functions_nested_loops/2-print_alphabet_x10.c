#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet in lowercase
  *
  * Return: return 0.
  */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}

