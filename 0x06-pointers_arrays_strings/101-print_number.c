#include "main.h"

/**
  * print_number -  prints an integer.
  * @n: integer
  * Return: Always 0 (success)
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			_putchar('2');
			n = -(n + 2000000000);
		}
		else
		{
			n = -n;
		}
	}
	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
