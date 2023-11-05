#include "main.h"

/**
 * set_bit - set a bit at given index to 1
 * @index: index of the bit to be set as 1
 * @n: pointer to the number to be changed
 * Return: 1 if success, else -1
 * owned by: SmoxHakim
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}
