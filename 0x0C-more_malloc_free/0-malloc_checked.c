#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: unsingned int input
 * Return: ptr
 * owned by: SmoxHakim
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
