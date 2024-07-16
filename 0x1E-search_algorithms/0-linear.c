#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - function that searches for a value
* in an array of integers using the Linear search algorithm
* @array: is the array
* @size: is the number of elements in array
* @value: is the value to search for
* Return: return the index in where the value was found or -1
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
