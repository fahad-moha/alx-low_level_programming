#include "main.h"

/**
  * print_last_digit - prints the last digit of a number.
  * @num: number in which its last digit is looking
  * Return: value of last digit
  */
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		num = -num;

	last_digit = num % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
