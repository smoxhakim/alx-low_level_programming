#include "main.h"

/**
 * _strncpy - copy two strings
 * @dest: first input
 * @src: second input
 * @n: input number
 * Return: dest
 * owned by: SmoxHakim
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
	dest[x] = '\0';
	}
	return (dest);

}
