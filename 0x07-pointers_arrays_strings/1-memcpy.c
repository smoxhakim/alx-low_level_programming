#include "main.h"

/**
 * _mencpy - copies memory
 * @dest: the srting
 * @src: input string
 * @n: unsigned number
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
