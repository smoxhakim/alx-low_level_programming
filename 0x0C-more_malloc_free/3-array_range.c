#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array
 * @min: first input
 * @max: second input
 * Return: pointer
 * owned by: SmoxHakim
 */

int *array_range(int min, int max)
{

	unsigned int total, x;
	void *ptr;
	unsigned int *count;

	if (min > max)
		return (NULL);

	total = (max - min);

	ptr = malloc(total + 1);

	if (!ptr)
		return (NULL);

	zero = (unsigned int *)ptr;

	for (x = 0; x <= max; x++)
	{
		zero[x] = min;
		min++;
	}


	return (ptr);
}


