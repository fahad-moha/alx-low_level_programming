#include "main.h"
#include <stdlib.h>

/**
  * count_words - counts words
  * @str: string pointer
  * Return: nothing
  */
int count_words(char *str);

/**
  * is_space  - if it is space
  * @c: character
  * Return: nothing
  */
int is_space(char c);

/**
  * **strtow -  splits a string into words.
  * @str: a pointer to a string
  * Return: NULL if str == NULL or str == ""
  */

char **strtow(char *str)
{
	int num_words, j;
	int i, word_start, word_length, in_word, word_index;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = count_words(str);
	if (num_words == 0)
	{
		return (NULL);
	}

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	i = 0;
	word_start = 0;
	word_length = 0;
	in_word = 0;
	word_index = 0;

	while (str[i] != '\0')
	{
		if (!is_space(str[i]))
		{
			if (!in_word)
			{
				word_start = i;
				in_word = 1;
			}
			word_length++;
		}
		else
		{
			if (in_word)
			{
				words[word_index] = malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					int j;

					for (j = 0; j < word_index; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}

				for (j = 0; j < word_length; j++)
				{
					words[word_index][j] = str[word_start + j];
				}
				words[word_index][word_length] = '\0';
				word_index++;
				word_length = 0;
				in_word = 0;
			}
		}
		i++;
	}
	if (in_word)
	{
		int j;

		words[word_index] = malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (j = 0; j <= word_index; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		for (j = 0; j < word_length; j++)
		{
			words[word_index][j] = str[word_start + j];
		}
		words[word_index][word_length] = '\0';
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}

/**
  * count_words - counts words
  * @str: a pointer to a string
  * Return: number of words
  */
int count_words(char *str)
{
	int count, i, in_word;

	count = 0;
	i = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (!is_space(str[i]))
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

/**
  * is_space - checks if it is space
  * @c: char if is space
  * Return: space, tab or newline
  */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
