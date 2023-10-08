#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array
 * @nmemb: first input
 * @size: second input
 * Return: pointer
 * owned by: SmoxHakim
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total, x;
	void *ptr;
	unsigned char *zero;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = (nmemb * size);

	ptr = malloc(total);

	if (!ptr)
		return (NULL);
	zero = (unsigned char *)ptr;

	for (x = 0; x < total; x++)
		zero[x] = 0;


	return (ptr);
}
