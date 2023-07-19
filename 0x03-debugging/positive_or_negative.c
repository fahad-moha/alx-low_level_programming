#include "main.h"

/**
  * positive_or_negative - function for positive or negative
  * @i: interger to be checked
  * Return: Always 0 (success).
  */
void positive_or_negative(int i)
{
	if  (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("not a number");
	}
}
