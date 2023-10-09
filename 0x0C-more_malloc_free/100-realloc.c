#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory
 * @ptr: pointer to memory
 * @old_size: the old size
 * @new_size: the new size
 * Return: pointer or NULL
 * owned by: SmoxHakim
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned char *src, *dest;
	unsigned int min_size, i;

	if (new_size == 0)
	{
		free(ptr);
	return (NULL);
	}

	if (ptr == NULL)
	{
	return (malloc(new_size));
	}

	if (new_size == old_size)
	{
	return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
	return (NULL);
	}

	src = (unsigned char *)ptr;
	dest = (unsigned char *)new_ptr;
	min_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < min_size; i++)
	{
		dest[i] = src[i];
	}

	free(ptr);

	return (new_ptr);
}
