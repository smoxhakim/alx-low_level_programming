#include "main.h"

/**
 *_memset - file memory
 *@s: the string
 *@b: the char
 *@n: the number
 *Return: s area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
