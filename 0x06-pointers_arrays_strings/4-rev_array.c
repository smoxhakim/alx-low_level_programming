#include "main.h"

/**
 * reverse_array - rverse two strings
 * @a: first input
 * @n: input number
 * owned by: SmoxHakim
 * Return: dest
*/

void reverse_array(int *a, int n)
{
	int x, y, tmp;

	for (x = 0; x < n - 1; x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			tmp = a[y];
			a[y] = a[y - 1];
			a[y - 1] = tmp;
		}
	}
}
