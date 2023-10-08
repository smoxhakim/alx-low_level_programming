#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first str
 * @s2: the second str
 * @n: number of bytes
 * Return: pointer
 * owned by: SmoxHakim
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *reslt;
	unsigned int x, y;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}

	len1 = mylenght(s1);
	len2 = mylenght(s2);

	if (n >= len2)
	{
		n = len2;
	}

	reslt = malloc(len1 + n + 1);

	if (!reslt)
	{
		return (NULL);
	}

	for (x = 0; x < len1; x++)
	{
		reslt[x] = s1[x];
	}

	for (y = 0; y < n; y++)
	{
		reslt[x + y] = s2[y];
	}
	reslt[x + y] = '\0';
	return (reslt);
}
