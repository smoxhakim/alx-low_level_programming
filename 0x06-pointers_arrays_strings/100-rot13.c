#include "main.h"

/**
 * rot13 - encodes a string
 * @s: input
 * Return: s
 * owned by: SmoxHakim
 */

char *rot13(char *s)
{
	int y = 0, x;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[y] != '\0')
	{
		for (x = 0; x < 52; x++)
		{
			if (s[y] == alph[x])
			{
				s[y] = rot13[x];
				break;
			}
		}
		y++;
	}

	return (s);
}
