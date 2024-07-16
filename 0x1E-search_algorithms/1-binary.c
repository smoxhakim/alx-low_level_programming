#include "search_algos.h"

/**
* print_subarray - function that searches for a value
* in a sorted array of integers using the Binary search algorithm
*
* @array: is the array
* @l: is the number of elements in array
* @r: is the value to search for
*
* Return: return the index in where the value was found or -1
*/

void print_subarray(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i > l)
		{
			printf(", ");
		}
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
* binary_search - function that searches for a value
* in a sorted array of integers using the Binary search algorithm
*
* @array: is the array
* @size: is the number of elements in array
* @value: is the value to search for
*
* Return: return the index in where the value was found or -1
*/


int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, mid, r = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (l <= r)
	{
		print_subarray(array, l, r);
		mid = ((l + r) / 2);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return (-1);
}
