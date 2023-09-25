#include "main.h"

/**
 * _strchr - locates a character
 * @s: the stirng
 * @c: the character
 * Return: c or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] == c)
		{
			return (s);
			x++;
		}
	}

	if (s[x] == c)
	{
		return (s);
	}

	return (NULL);
}
