#include "main.h"

/**
 * _strstr - locates
 * @haystack: string
 * @needle: first
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int x, y;

	x = 0;
	y = 0;


	while (haystack[x])
	{
		while (needle[y] && (haystack[y] == needle[0]))
		{
			if (haystack[x + y] == needle[y])
				y++;
			else
				break;
		}
		if (needle[y])
		{
			y++;
			y = 0;
		}
		else
			return (haystack + y);
	}
	return (0);
}
