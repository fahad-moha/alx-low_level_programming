#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make change for
  * an amount of money.
  * @argv: an array of strings that contains the actual arguments.
  * @argc: number of command-line arguments
  * Return: 1 or 0
  */

int main(int argc, char *argv[])
{
	int cents, num_quarters, num_dimes, num_nickels,
	    num_pennies, total_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_quarters = cents / 25;
	cents = cents % 25;
	num_dimes = cents / 10;
	cents = cents % 10;
	num_nickels = cents / 5;
	cents = cents % 5;
	num_pennies = cents;
	total_coins = num_quarters + num_dimes + num_nickels + num_pennies;
	printf("%d\n", total_coins);
	return (0);
}
