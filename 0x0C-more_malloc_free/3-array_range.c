#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	int *ptr;

	if (min > max)
		return (NULL);

	total = (max - min + 1);

	ptr = (int *)malloc(sizeof(int) * total);

	if (!ptr)
		return (NULL);

	for (x = 0; x < total; x++)
	{
		ptr[x] = min;
		min++;
	}


	return (ptr);
}


