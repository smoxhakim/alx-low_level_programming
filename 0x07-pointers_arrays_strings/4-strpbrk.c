#include "main.h"

/**
 * _strpbrk - function that searches
 * @s:first
 * @accept: matche
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
		while (*s)
		{
			for (x = 0; accept[x]; x++)
			{
				if (*s == accept[x])
					return (s);
			}
			s++;
		}
	return (NULL);
}
