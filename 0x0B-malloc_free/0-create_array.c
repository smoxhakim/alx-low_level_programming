#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - memory allocation
 * @size: size of the int
 * @c: the input char
 * Return: NULL or parr
 * owned by: SmoxHakim
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *parr;

	if (size == 0)
	{
		return (NULL);
	}

	parr = (char *)malloc(size * sizeof(char));

	if (parr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		parr[i] = c;
	}

	return (parr);
}
