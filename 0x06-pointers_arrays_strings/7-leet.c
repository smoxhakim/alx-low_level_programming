#include "main.h"

/**
 * leet - encodes a string
 * @s: imput string
 * Return: str
 * owned by: SmoxHakim
 */
char *leet(char *s)
{
	int x, y;
	char alph[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (x = 0; s[x]; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (alph[y] == s[x])
			{
				s[x] = num[y];
			}
		}
	}
	return (s);
}
