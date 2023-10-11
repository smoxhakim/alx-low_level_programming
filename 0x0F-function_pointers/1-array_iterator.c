#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute the given paratmeter
 * @array: input array
 * @size: size of the array
 * @action: ptr to funcyion
 * owned by: SmoxHakim
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
