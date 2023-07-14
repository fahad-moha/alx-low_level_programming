#include <stdio.h>

/**
 * main - English alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char english_alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(english_alphabet[i]);
	}
	putchar('\n');
	return (0);
}
