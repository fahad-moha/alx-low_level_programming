#include "main.h"

/**
  * str_length - Helper function to get the length of a string
  * @s: pointer to an array
  * Return: length of string
  */
int str_length(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
  * is_palindrome_helper - Helper function to check if
  * a string is a palindrome using recursion
  * @s: pointer to an array
  * @start: star index
  * @end: end index
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
  * is_palindrome - to check if a string is a palindrome
  * @s: pointer to an array
  * Return: returns 1 if a string is a palindrome and 0 if not.
  */
int is_palindrome(char *s)
{
	int length = str_length(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
