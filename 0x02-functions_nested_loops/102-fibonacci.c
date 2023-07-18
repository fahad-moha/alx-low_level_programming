#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int step;
	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (step = 0; step < 50; step++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);

		fibo1 = fibo2;
		fibo2 = sum;

		if (step == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

