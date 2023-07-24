#include "main.h"

/**
  * swap_int - swaps the values of two integers.
  * @a: first integer
  * @b: second integer
  * Return: Always 0 (success).
  */
void swap_int(int *a, int *b)
{
	int third_var;

	third_var = *a;
	*a = *b;
	*b = third_var;
}
