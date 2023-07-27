#include "main.h"
#include <string.h>
/**
  * *infinite_add - adds two numbers.
  * @size_r -  is the buffer that the 
  * @n2: second number
  * @r: is the buffer that the function will use to store the result
  * @n1: first number
  * Return: If the result can not be stored in r the function must return 0
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i, j, k;

	if (len1 + len2 > size_r - 1)
	{
		return (0);
	}

	for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0
			|| j >= 0 || carry != 0; i--, j--, k++)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		r[k] = sum % 10 + '0';
		carry = sum / 10;
	}
	r[k] = '\0';
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
