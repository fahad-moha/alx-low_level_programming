#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - multiplies two numbers.
  * @argv: array of strings that contains the actual arguments.
  * @argc: the number of command-line arguments
  * Return: If the program does not receive two arguments,
  * print Error followed 1 otherwise 0
  */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
