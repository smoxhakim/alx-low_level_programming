#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first input
 * @src: second input
 * owned by: SmoxHakim
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
