#include "search_algos.h"

/**
 * linear_search - using linear search algo to find a value.
 * @array: pointer to the first element.
 * @size: size of the array.
 * @value: value to be searched.
 * Return: return the index in where the value was found
 *         else -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int count = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);


		if (array[i] == value)
		{
			return (count);
		}
		count++;
	}
	return (-1);
}
