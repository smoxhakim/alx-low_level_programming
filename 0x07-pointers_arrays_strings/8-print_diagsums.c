#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum
 * @a: input
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sum1 = 0, sum2 = 0;

	for (x = 0; x < (size * size); x++)
	{
		if (x % (size + 1) == 0)
		{
			sum1 += *(a + x);
		}
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
		{
			sum2 += *(a + x);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
