#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
  * main -  adds positive numbers.
  * @argv: is an array of strings that contains the actual arguments.
  * @argc: the number of command-line arguments
  * Return: If no number is passed to the program 0
  * otherwise 0
  */
int main(int argc, char *argv[])
{
	int sum, j, i, num;
	char *arg;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		j = 0;
		while (arg[j] != '\0')
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num = atoi(arg);
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
