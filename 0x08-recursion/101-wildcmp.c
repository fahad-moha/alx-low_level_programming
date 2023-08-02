#include "main.h"

/**
  * wildcmp_helper - to compare two strings with wildcards using recursion
  * @s2: a pointer to an array
  * @s1: a pointer to an array
  * Return: recursion
  */
/* Helper function to compare two strings with wildcards using recursion */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		else if (*s1 == '\0')
		{
			return (0);
		}
		else
		{
			if (wildcmp_helper(s1 + 1, s2) || wildcmp_helper(s1, s2 + 1))
			{
				return (1);
			}
			return (0);
		}
	}
	else if (*s1 == *s2)
	{
		return (wildcmp_helper(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}

/**
  * wildcmp - compares two strings and returns 1 if the strings
  * can be considered identical, otherwise return 0.
  * @s2: pointer to an array
  * @s1: pointer to an array
  * Return: Always 0 (success)
  */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
