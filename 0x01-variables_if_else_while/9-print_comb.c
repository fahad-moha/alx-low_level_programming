#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j == 9 ? '\n' : ',');
			putchar(j == 9 ? '\0' : ' ');
		}
	}
	putchar('\n');
	return (0);
}
