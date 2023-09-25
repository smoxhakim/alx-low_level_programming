#include "main.h"

/**
 * _strspn - gets the langh
 * @s: the string
 * @accept: the count
 * Return: x
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, l;

	for (x = 0; s[x] != '\0'; x++)
	{
		l = 1;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				l = 0;
				break;
			}
		}
		if (l == 1)
			break;
	}
	return (x);
}
