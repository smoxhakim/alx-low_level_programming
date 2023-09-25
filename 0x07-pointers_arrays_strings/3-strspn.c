#include "main.h"

/**
 * _strspn - gets the langh
 * @s: the string
 * @accept: the count
 * Return: x
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; y++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
				return (x);
		}
	}
	return (x);
}
