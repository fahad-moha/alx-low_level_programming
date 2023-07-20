#include <stdio.h>

/**
  * main - works out FizzBuzz challenge
  *
  * Return: Always 0 (success).
  */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf(" FizzBuzz ");
		else if (i % 5 == 0)
			printf(" Buzz ");
		else if (i % 3 == 0)
			printf(" Fizz ");
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
