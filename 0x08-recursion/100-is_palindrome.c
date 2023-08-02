#include "main.h"

/**
  * str_length - Helper function to calculate
  * the length of a string using recursion
  * @s: a pointer to an array
  * Return: 0 othewise 1 + str_length(s + 1)
  */
int str_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str_length(s + 1));
	}
}

/**
  * is_palindrome_helper - to check if a string is a palindrome using recursion
  * @end: index end
  * @s: ponter to an array
  * @start: index start
  * Return: 1, 0 or is_palindrome_helper(s, start + 1, end - 1)
  */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
}

/**
  * is_palindrome - to check if a string is a palindrome using recursion
  * @s: a pointer to an array
  * Return: returns 1 if a string is a palindrome and 0 if not.
  */
int is_palindrome(char *s)
{
	int length = str_length(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
