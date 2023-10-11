#include "function_pointers.h"

/**
 * int_index - searche for integer
 * @array: input array
 * @size: number in array
 * @cmp: ptr function
 * Return: x or -1
 * owned by: SmoxHakim
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	while (x < size)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	x++;
	}

	return (-1);
}

