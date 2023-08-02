#include "main.h"

/**
  * sqrt_helper - Helper function to find the natural
  * square root of a number using recursion
  * @i: integer number
  * @n: integer number
  * Return: recursive call with i+1
  */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_helper(n, i + 1));
	}
}

/**
  * _sqrt_recursion - returns the natural square root of a number.
  * @n: number
  * Return: the natural square root of a number.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_helper(n, 1));
	}
}
