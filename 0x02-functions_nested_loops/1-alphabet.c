#include "main.h"

/**
  * print_alphabet - prints the alphabet in lowercase
  *
  * Return: return 0.
  */
void print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
