#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first input
 * @src: second input
 * @n: input number
 * Return: dest
 * owned by: SmoxHakim
*/

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		continue;
	}
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
