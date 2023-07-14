#include <stdio.h>

/**
 * main - English alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(number[i]);
	}
	putchar('\n');
	return (0);
}
