#include "main.h"

/**
 * swap_int - swap the value
 * @a: the first value
 * @b: the second value
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
