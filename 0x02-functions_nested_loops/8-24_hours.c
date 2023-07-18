#include "main.h"

/**
  * jack_bauer -  prints every minute of the day of Jack Bauer,
  * starting from 00:00 to 23:59.
  *
  * Return: return 0.
  */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
			j++;
		}
	}
}