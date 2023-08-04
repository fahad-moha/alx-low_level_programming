#include <stdio.h>
#include "main.h"

/**
  * main - prints the number of arguments passed into it.
  * @argv: is an array of
  * strings that contains the actual arguments.
  * @argc: is an integer that represents the number of
  * command-line arguments passed to the program
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
