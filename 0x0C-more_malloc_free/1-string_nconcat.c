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
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *reslt;
	unsigned int x, y;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;

	reslt = malloc(len1 + n + 1);

	if (!reslt)
		return (NULL);

	for (x = 0; x < len1; x++)
		reslt[x] = s1[x];

	for (y = 0; y < n; y++)
		reslt[x + y] = s2[y];

	reslt[x + y] = '\0';
	return (reslt);
}
