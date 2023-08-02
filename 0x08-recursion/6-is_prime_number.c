#include "main.h"

/**
  * is_prime_helper - Helper function to check
  * if a number is prime using recursion
  * @i: second number
  * @n: first number
  * Return: 1, 0 or is_prime_helper(n, i - 1)
  */
int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i - 1));
	}
}

/**
  * is_prime_number - returns 1 if the input integer is
  * a prime number, otherwise return 0.
  * @n: number in which checking
  * Return: 1 if the input integer is a prime number,
  * otherwise return 0.
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, n - 1));
	}
}
