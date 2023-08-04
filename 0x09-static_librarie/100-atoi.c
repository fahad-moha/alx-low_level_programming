#include "main.h"
#include <limits.h>

/**
  * _atoi - convert a string to an integer.
  * @s: a string to integer
  * Return: If there are no numbers in the string, return 0
  */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	/* Skip over any non-numeric characters at the beginning of the string*/
	while ((s[i] < '0' || s[i] > '9'))
	{
		/* Check for a minus sign*/
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	/* Convert the number in the string to an integer*/
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		/* Check for overflow*/
		if (result > INT_MAX / 10 ||
				(result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			/**
			  *Overflow occurred, return the maximum
			  *or minimum value depending on the sign
			  */
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	/* Apply the sign to the result*/
	result *= sign;
	return (result);
}
