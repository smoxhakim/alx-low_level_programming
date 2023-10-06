#include <stdlib.h>
#include "main.h"

/**
 * is_space - function checks if c is a space, tab, or newline
 * @c: char input
 * Return:  1 if c is a space, tab, or newline and 0 otherwise
 * owned by: SmoxHakim
*/

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - counts the number of words in a string
 * @str: char *input
 * Return: count
 * owned by: SmoxHakim
*/

int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		while (is_space(str[i]))
		{
			i++;
		}
		if (str[i] != '\0')
		{
			count++;
			while (!is_space(str[i]) && str[i] != '\0')
			{
				i++;
			}
		}
	}
	return (count);
}

/**
 *  **strtow - checks if the input string str is NULL or an empty string
 * @str: char *input
 * Return: NULL or 1
 * owned by: SmoxHakim
*/

char **strtow(char *str)
{
	int num_words = count_words(str);
	char **words;
	int word_index = 0;
	int i = 0;
	int j, word_length, start, end;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	if (num_words == 0)
	{
		return (NULL);
	}

	words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
	return (NULL);
	}

	while (str[i] != '\0')
	{
		while (is_space(str[i]))
		{
			i++;
		}

		if (str[i] != '\0')
		{
			start = i;

			while (!is_space(str[i]) && str[i] != '\0')
			{
				i++;
			}
		end = i;

		word_length = end - start;
		words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));

		if (words[word_index] == NULL)
		{
		for (j = 0; j < word_index; j++)
		{
			free(words[j]);
		}

		free(words);
		return (NULL);

		}

		for (j = 0; j < word_length; j++)
		{
			words[word_index][j] = str[start + j];
		}

		words[word_index][word_length] = '\0';
		word_index++;

		}
	}

	words[num_words] = NULL;
	return (words);
}
