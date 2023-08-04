#include "main.h"
#include <stdio.h>

/**
  * main - prints its name.
  * @argv: the argv array that is passed to the main function
  * @argc: is an integer that represents the number of
  * command-line arguments passed to the program
  * Return: Always 0 (success)
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
