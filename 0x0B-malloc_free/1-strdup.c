#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copy of the string
 * @str: the string input
 * Return: NULL or pointer
 * owned by: SmoxHakim
 */

char *_strdup(char *str)
{
	size_t length = 0;
	size_t i = 0;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		duplicate[i] = str[i];
		i++;
	}

	duplicate[length] = '\0';

	return (duplicate);
}

