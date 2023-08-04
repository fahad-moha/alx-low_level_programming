#include "main.h"
#include <stdio.h>

/**
  * main - prints all arguments it receives.
  * @argv: is an array of strings that contains the actual arguments
  * @argc: the number of command-line arguments
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
